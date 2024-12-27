#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number that you want to how much time multiple :";
    cin>>n;

    int a=1;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a=a*2;
    }

    return 0;
}