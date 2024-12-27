#include<iostream>
using namespace std;

int factorial (int a){
    int fact =1;
    for(int i=2; i<=a; i++){
        fact = fact*i;
    }
    return fact;
}

int mathformula(int x, int y){
    int calculate = factorial(x)/factorial(x-y);
    return calculate;
}

int main()
{
    int n,r;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;

    int nPr = mathformula(n,r);
    cout<<nPr;

    return 0;
}