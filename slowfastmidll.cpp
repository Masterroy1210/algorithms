#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;


int midElement(struct node *start)
{
        struct node *slow;
        struct node *fast;
        fast = slow =start;
        if(start!=NULL)
        {
            while(fast!=NULL && fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;

            }
            return slow->data;
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
    int no,mid;
    cout<<"\nEnter the no of nodes you want in you linked list";
    cin>>no;
    create(no);
    mid = midElement(head);
    cout<<"\nThe middle element of the liinked list"<<mid;
    return 0;



}