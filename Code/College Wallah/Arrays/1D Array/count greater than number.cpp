#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the number :";
    cin>>x;
    int n;
    cout<<"Enter the numbers :";
    cin>>n;
    int count=0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(x<arr[i]){
            count++;
        }
    }
    cout<<"The numbers is :" <<count;
    return 0;
}