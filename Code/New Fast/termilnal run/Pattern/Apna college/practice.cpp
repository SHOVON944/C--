#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;

    for(int i=1; i<=n; i++){
        int nsp=n-i;
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        int a=i;
        for(int k=1; k<=i; k++){
            cout<<a<<" ";
        a--;
        }
        int b=2;
        for(int p=2; p<=i; p++ ){
            cout<<b<<" ";
            b++;
        }
        cout<<endl;
    }

    return 0;
}