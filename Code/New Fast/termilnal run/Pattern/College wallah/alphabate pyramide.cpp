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
        int a=1;
        for(int k=1; k<=2*i-1; k++){
            char ch= (char)(a+64);
            cout<<ch<<" ";
            a++;
        }
        cout<<endl;
    }

    return 0;
}