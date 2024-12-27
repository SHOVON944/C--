#include<iostream>
using namespace std;

int main()
{
    int n,nsp,nst;
    cout<<"Enter the number : ";
    cin>>n;
    nsp=0;
    nst=n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        for(int k=1; k<=nst; k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        nsp++;
        nst--;
    }

    return 0;
}