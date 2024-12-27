#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the number you want to multiple :";
    cin>>n;
    cout<<"Enter the number that how time u multiple :";
    cin>>m;

    for(int i=1; i<=m; i++){
        cout<<n*i<<endl;
    }

    return 0;
}