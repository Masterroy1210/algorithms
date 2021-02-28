#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;




int getLength(struct node *start)
{
    int count=0;
    struct node *temp = start;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;


}

int getMiddleElement(struct node *start)
{
    struct node *temp = start;
    if(temp!=NULL)
    {
        int length =getLength(temp);
        int i=0;
        for (i=0;i<length/2;i++)
            temp=temp->next;
        return temp->data;

    }

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
    int no,c,mid;
    cout<<"\n Enter The No of noddes you want in the linked list";
    cin>>no;
    create(no); 
    c =getLength(head);
    cout<<"\n The length of the linked list entered by you is"<<c;
    mid =getMiddleElement(head);
    cout<<"\nTHe middle element of the linked list is"<<mid;
    return 0;
}