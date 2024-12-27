#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        int nsp=n-i;
        int nst=2*i-1;
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        for(int k=1; k<=nst; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--){
        int nsp1=n-i;
        int nst1=2*i-1;
        for(int j=1; j<=nsp1; j++){
            cout<<"  ";
        }
        for(int k=1; k<=nst1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}