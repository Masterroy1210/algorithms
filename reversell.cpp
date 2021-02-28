#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;

}*head;


void printReverse(struct node *start)
{
    if(start==NULL)
    return;
    printReverse(start->next);
    printf("%d\n",start->data);

}


void create(int no)
{   
    int val;
    struct node *newnode, *temp;
    int i;
    head = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter the data of 1st node\n";
    cin>>val;
    head->data=val;
    head->next=NULL;
    temp = head;
for(i=2;i<=no;i++)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        cout<<"\nunbale to allocate memory";
        break;
    }
    cout<<"Enter the valuue of node no "<<i;
    cout<<"\n";
    cin>>val;
    newnode->data=val;
    newnode->next=NULL;
    
    temp->next = newnode;
    temp=temp->next;
}

}




int main()
{
    int no;
    cout<<"\nEnter the no of nodes you want in the linked list";
    cin>>no;
    create(no);
    cout<<"\n-----Printing the linked list in the reverse order";
    printReverse(head);
    return 0;
    


}