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
Node *append(int data, Node *head){
    if(head==NULL){
        //first Node 
        Node *temp=new Node(data); //dynamic  memory created.
        head=temp;

    }
    else{
        //some Nodes are already there.
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
    }
    return head;
}
int count(Node *head){
    //this methodwill return number of nodes in the LL
    Node *temp=head;
    int count=0;
    while(temp){
        count+=1;
        temp=temp->next;
    }
    return count;
}
Node *reverse(Node *head){
    //3 pointer approach..
    Node *curr,*prev,*Next;
    prev=NULL;
    Next=NULL;
    curr=head;
    while(curr){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    head=prev;
    return head;
}
int main()
{   
    Node *head=NULL;
    // head=push(5,head);
    // cout<<"\nfirst insertion: "<<endl;
    // print(head);
    // head=push(10,head);
    // cout<<"\nsecond insertion: "<<endl;
    // print(head);
    // head=push(15,head);
    // cout<<"\nthird insertion: "<<endl;
    // //print(head);

    head=append(5,head);
    head=append(4,head);
    head=append(3,head);
    head=append(2,head);
    
    print(head);
    cout<<"\nnumber of Nodes :"<<count(head);
    cout<<"\ncalling reverse method....\n";
    head=reverse(head);
    print(head);
return 0;
}