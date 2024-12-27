#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numbers you want to print :";
    cin>>n;
    int m;
    cout<<"Enter the number you want to skip :";
    cin>>m;

    for(int i=1; i<=n; i++){
        if(i==m) continue ;
            cout<<i<<" ";
    }

    return 0;
}