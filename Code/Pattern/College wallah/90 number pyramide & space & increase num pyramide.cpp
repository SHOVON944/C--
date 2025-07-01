#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int nsp=1;
    int nnm=n;

    for(int b=1; b<=2*n+1; b++){
        cout<<b<<" ";
    }
    cout<<endl;

    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=nnm; j++){
            cout<<a<<" ";
            a++;
        }
        for(int k=1; k<=nsp; k++){
            cout<<"  ";
            a++;
        }
        for(int p=1; p<=nnm; p++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
        nnm--;
        nsp+=2;
    }

    return 0;
}