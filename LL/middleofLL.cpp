//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
} ;
Node *push(int data,Node *head){
    if(head==NULL){
        //first  node to be inserted.
        Node *temp=new Node(data); //dynamic  memory created.
        head=temp;
    }
    else{
        //some nodes are already there.
        Node *p=head;//just to reach at last node.
        
        while(p->next){
            p=p->next;
        }
        Node *temp=new Node(data);
        p->next=temp;
    }
    return head;

}
void print(Node *head){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int middle(Node *head){
    Node *slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow->data;
}
int main()
{   
    Node *head=NULL;
    head=push(5,head);
   // cout<<"\nfirst insertion: "<<endl;
   // print(head);
    head=push(10,head);
    //cout<<"\nsecond insertion: "<<endl;
   // print(head);
    head=push(15,head);
    head=push(20,head);
    head=push(25,head);
    head=push(30,head);
    //cout<<"\nthird insertion: "<<endl;
    //print(head);
    
    print(head);
    int ele=middle(head);
    cout<<"\nmiddle of LL is :"<<ele<<endl;
return 0;
}