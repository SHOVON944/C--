#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number you want to print :";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2!=0)
        continue;
        cout<<i<<" ";
    }

    return 0;
}