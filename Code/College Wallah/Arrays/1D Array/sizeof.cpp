#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,2,5,3,5,6,4};
    int n=sizeof(arr)/4;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}