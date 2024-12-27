#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    char op;
    cout<<"Enter the number and operation(Suggest: n1+n2) :";
    cin>>n1;
    cin>>op;
    cin>>n2;

    if(op=='+'){
        cout<<n1+n2;
    } else if(op=='-'){
        cout<<n1-n2;
    } else if(op=='*'){
        cout<<n1*n2;
    } else if(op=='/'){
        cout<<n1/n2;
    } else{
        cout<<"Invalid number or operation .";
    }

    return 0;
}