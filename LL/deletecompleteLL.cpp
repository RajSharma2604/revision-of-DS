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
    if(head==NULL){
        cout<<"\nLL is empty...";
        return;
    }
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
Node *deletionatlast(Node *head){
    //first reaching at that location  
    Node *p=head;//just to reach at second last node.
    //only one node
    if(head->next==NULL){
        head=NULL;
    }
    else{
        while(p->next->next){
            p=p->next;
        }
        //reached second last Node
        Node *temp=p->next;
        p->next=NULL;
        free(temp);
        
    }
    return head;
}
Node *deletecompleteLL(Node *head){

    while(head){
        Node *t=head;
        head=head->next;
        free(t);
    }
    //head is now poiting the last node.
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
    cout<<"\ndeleting the last Node\n";
    head=deletionatlast(head);
    print(head);
    cout<<"\nremoving the LL.....\n";
    if(deletecompleteLL(head)==NULL){
        cout<<"completely LL removed...";
    }

    cout<<"print() method is called...";
    //print(head);
return 0;
}