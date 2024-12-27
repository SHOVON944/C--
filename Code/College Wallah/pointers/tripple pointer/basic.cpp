#include<iostream>
using namespace std;

int main()
{
    int a=25;
    int* x= &a;
    int** y=&x;
    int*** z=&y;

    cout<<a<<endl;
    cout<<*x<<endl;
    cout<<**y<<endl;
    cout<<***z<<endl;

    return 0;
}