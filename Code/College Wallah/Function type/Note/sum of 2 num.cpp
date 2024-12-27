#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}

int main()
{
    int a,b;
    cout<<"Enter the 1st number :";
    cin>>a;
    cout<<"Enter the 2nd number :";
    cin>>b;
    int sum = add(a,b);
    cout<<"The sum is :"<<sum;

    return 0;
}