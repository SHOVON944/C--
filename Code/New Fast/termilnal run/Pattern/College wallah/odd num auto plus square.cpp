#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int a=1;                                 // or,,,   eikhetre cin>>n; er por nicher line hobe...
    for(int i=1;i<=n;i++){                   //for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){               //for(int j=1;j<=2*n-1;j++){
            cout<<a<<" ";                       //cout<<j<<;
           a=a+2;
        }cout<<endl;
    }
    return 0;
}