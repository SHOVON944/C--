#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number that you want to get the square :";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int sqr=arr[i]*arr[i];
        cout<<"The elements of "<<i<<" raised to the power 2 is :"<<sqr<<endl;
    }
    return 0;
}