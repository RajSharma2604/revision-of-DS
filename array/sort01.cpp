//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int arr[]={1,1,1,1,1,0,0,0,0};
    int n=sizeof(arr)/sizeof(int);
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0)i++;
        if(arr[j]==1)j--;
        if(arr[i]==1 || arr[j]==0){
            swap(arr[i++],arr[j--]);
        }
    }
    cout<<"printing swapped array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}