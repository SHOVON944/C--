#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the lines number:";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){             //  i+j=n    or, j=n-i
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){               //  karon line(i) jekoita seikoita * oi line e
        cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}