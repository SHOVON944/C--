#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,3,4,44,7,1,54,9};
    int n=sizeof(arr)/4;
    int mn=arr[0];
    for(int i=1; i<n; i++){
        if(mn>arr[i]){
            mn=arr[i];
        }
    }
    cout<<"Minimum number is :"<<mn;
    return 0;
}