#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<"Enter the third number :";
    cin>>c;

    if(a>b){
        if(a>c){     // a>b & a>c -> a is greaterst
            cout<<a<<" is greatest";
        } else{      // c>a & a>b -> c>a>b
            cout<<c<<" is greatest";
        }
    } else {         // b>a
        if(b>c){     // b>a & b>c ->  b is greatest
            cout<<b<<" is greatest";
        } else{      // c>b -> c>b>a
            cout<<c<<" is greatest";
        }
    }

    return 0;
}