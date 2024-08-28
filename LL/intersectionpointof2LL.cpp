/*

writing this logic to finding the intersection point in Y shaped LL

question is like if two head pointers to two LL points to same node means 
there exist commonNode otherwise return NULL

logic goes like ....

calculate length of both the LL

find the difference if first LL is large then move pointer that number of nodes.
same with other LL


int Length(Node *temp){
int count=0;
while(temp--){
temp=temp->next;
    }
    return count;
}

Node *intersection(Node *first ,Node *second){
int len1=Length(first);
int len2=Length(second);
int diff=len1-len2; //means first LL is bigger
if (diff>=0){
    while(diff--){
        first=first->next;
    }
    }
else{
    diff=len2-len1;
    or diff=abs(diff);
    while(diff--){
    second=second->next;
    }
}
while(first && second){
    if(first==second){
        
        //two nodes pointing tow same node
        return first;
        }
    }
    return NULL;
}


























*/