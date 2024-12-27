#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,5,2,9,7,4};
    int n=sizeof(arr)/4;
    int mx=INT_MIN;
    for(int i=0; i<n; i++){
        mx=max(arr[i],mx);
    }
    int smx=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=mx){
            smx=max(arr[i],smx);
        }
    }
    cout<<"Enter the second max is :"<<smx;
    return 0;
}