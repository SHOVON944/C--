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
        for(int j=1; j<=i; j++){
            char ch= (char)(a+64);
            cout<<ch<<" ";
            a++;
        }
        int b=i-1;
        for(int p=1; p<=i-1; p++){
            char ch1= (char)(b+64);
            cout<<ch1<<" ";
            b--;
        }
        cout<<endl;
        }


    return 0;
}