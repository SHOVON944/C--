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
        if(i%2!=0){
            int multiple = 2*arr[i];
            cout<<"The odd number index multiple with 2 is :"<<multiple<<endl;
        } else{
            int increase10 = 10+arr[i];
            cout<<"The even number index increase with 10 is :"<<increase10<<endl;
        }
    }
    return 0;
}