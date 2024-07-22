//find the repeating element in such a way that elemet with smaller index should be select
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    //int arr[]={1,2,3,4,5,5,3,2};
    //int arr[]={1,2,3,4};
    int arr[]={1,2,3,4,5,5,3};
    int n=sizeof(arr)/sizeof(int);
    unordered_map<int,int>mp;
    int mini=INT_MAX,flag=0;//flag to handle no repeating element case
    for(int i=0;i<n;i++){
        int key=arr[i];
        if(mp.find(key)!=mp.end()){
            //means present
            int temp=mp[key];
            mini=min(mini,temp);
            flag=1;
        }
        else{
            mp[key]=i+1;// index starting from 1
        }
    }
    if(flag==0)cout<<"NO repeating element";
   else cout<<"minimum element index is :"<<mini;
return 0;
}