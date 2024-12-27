#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,3,4,44,7,1,54,9};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=1; i<n; i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    cout<<"Maximum number is :"<<mx;
    return 0;
}