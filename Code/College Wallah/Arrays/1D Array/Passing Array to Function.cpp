#include<iostream>
using namespace std;

void callfunction(int x[]){
    x[0]=5;
}
int main()
{
    int arr[3]={1,2,3};
    for(int i=0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    callfunction(arr);
    for(int i=0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}