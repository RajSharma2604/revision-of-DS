#include<iostream>
using namespace std;
int main(){
    int n=5;//sizeof array
    int *arr=new int[n];//dynamic array creation of size n and type integer.
    //lets put some value in array
    cout<<"enter value in array of size"<<n<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nfinding minimum in given array:"<<endl;
    int min=arr[0];
    int min_idx=0;
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            min_idx=i;
        }
    }
    cout<<"\nminimum element is :"<<min<<" and index is :"<<min_idx<<endl;
    return 0;

}
