#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int nsp=1;
    int nnm=n;

    for(int a=1; a<=2*n+1; a++){
        cout<<a<<" ";
    }
    cout<<endl;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=nnm; j++){
            cout<<j<<" ";
        }
        for(int k=1; k<=nsp; k++){
            cout<<"  ";
        }
        for(int p=1; p<=nnm; p++){
            cout<<p<<" ";
        }
        cout<<endl;
        nnm--;
        nsp+=2;
    }
    return 0;
}