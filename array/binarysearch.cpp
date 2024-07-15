//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int bs(int *arr,int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main()
{   
    int arr[]={2,3,6,8,12,17,30};
    int n=7;
    int key;
    cout<<"enter key:";
    cin>>key;
    int index=bs(arr,n,key);
    if(index==-1){
        cout<<"NOT FOUND";
    }
    else{
        cout<<"index is:"<<index<<endl;
    }
return 0;
}