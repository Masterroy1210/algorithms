#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

int getNtheElement(struct node *start,int index)
{
    int count=0;
    struct node *temp = start;
    while(temp!=NULL)
    {
        if(count==index)
        return temp->data;
    count++;
    temp= temp->next;

    }
    return -1;

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
    int nodes,no,value;
    cout<<"\n Enter the number of the nodes you want in the linked list";
    cin>>nodes;
    create(nodes);
    cout<<"\nEnter the no off node you want to display";
    cin>>no;
    value =getNtheElement(head,no);
    cout<<"\n THe Element at given index is---"<<value;
    return 0;


}