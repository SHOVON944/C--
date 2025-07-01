#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int d=a+64;              //  d=65
            char ch=(char)d;         //  ch=(char)65 -> 'A'
            cout<<ch<<" ";
            a++;
        }
        cout<<endl;
    }
return 0;
}