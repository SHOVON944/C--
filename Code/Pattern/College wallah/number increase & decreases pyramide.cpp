#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        int a=i-1;
        for(int p=1; p<=i-1; p++){
            cout<<a<<" ";
        a--;
        }
        cout<<endl;
        }


    return 0;
}