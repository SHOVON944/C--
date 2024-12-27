#include<iostream>
using namespace std;

void functioncall(int x,int n){
    if(x==n){
        cout<<x<<endl;
        return;
    }
    cout<<x<<endl;
    functioncall(x+1,n);
    return;
}
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    functioncall(1,n);

    return 0;
}