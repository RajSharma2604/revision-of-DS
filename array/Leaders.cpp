#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int arr[]={16,17,3,4,5,2};
    int n=sizeof(arr)/sizeof(int);
   vector<int>ans;
   int max=arr[n-1];
   for(int i=n-2;i>=0;i--){
    if(arr[i]>max){
        ans.push_back(max);
        max=arr[i];
    }
   }
   ans.push_back(max);
    cout<<"printing leader array:"<<endl;
   reverse(ans.begin(),ans.end());
   for(int i:ans){
    cout<<i<<" ";
   }
return 0;
}