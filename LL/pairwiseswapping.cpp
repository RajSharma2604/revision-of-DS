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
void dataswapping(Node *head){
    Node *ptr=head;
    while(ptr&&ptr->next){
        swap(ptr->data,ptr->next->data);
        ptr=ptr->next->next;
    }
}
int main()
{   
    Node *head=NULL;
    head=push(5,head);
    head=push(10,head);
    head=push(15,head);
    head=push(20,head);
    head=push(25,head);
    //head=push(30,head);
    print(head);
    cout<<"\ncalling pairwise swapping...\n";
    dataswapping(head);
    cout<<"\nupdated LL\n:";
    print(head);
return 0;
}