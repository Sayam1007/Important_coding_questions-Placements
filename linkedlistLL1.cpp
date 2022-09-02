#include<iostream>
using namespace std;

//class Node 

class Node{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};





void length(Node *head) // function to display length of the linked list 
{
    int count=0;
    Node *temp=head;
    while(head!=NULL)
    {   count++;
        head=head->next;
    }
cout<<count;}






void display(Node *head) //function to display linked list 
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}





Node* reverselinkedlist(Node *head)  //function to reverse a linked list 
{
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        Node *nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    head=prev;
    return head;
}




void printithnode(Node *head,int i) //function to display a node at specific position 
{
    int count=0;
    Node *temp=head;
    while(head!=NULL)
    {
        if(count==i)
        {
            cout<<temp->data;
        }
        count++;
        temp=temp->next;
    }
}



Node *removeduplicates(Node *head) //function to remove duplicates from linked list 
{   
    Node *temp=head;
    
    if(head==NULL)
    return NULL ;

    while(head->next!=NULL)
    {
        if(head->data==head->next->data)
        {
            head->next=head->next->next;
        }
        else
            head=head->next;
        
    }
return temp;}



Node* midpoint(Node *head) //midpoint of linked list 
{
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(count%2==0)
    {
        count=count/2;
    }
    else{
        count=(count+1)/2;
    }
    int i=0;
    while(temp!=NULL)
    {
      if(i==count)
      {
        return temp;
        temp=temp->next;
      }
    }


}

int main()
{
    Node n1(10);
    Node *head=&n1;
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(40);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
   
   
    display(head);   
    cout<<endl;
    
    length(head);   
    cout<<endl;

    head=reverselinkedlist(head);
    display(head);
    
    cout<<endl;

    printithnode(head,3);   
    cout<<endl;

    
   
    cout<<endl;

    head=removeduplicates(head);
    display(head);

}