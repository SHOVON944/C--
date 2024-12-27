#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    for(int i=1; i<=n; i++){
        int k=n+1-i;
        for(int j=1; j<=k; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;
}