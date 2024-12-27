#include<iostream>
using namespace std;

int min(int a, int b){
    if(a<b){
        return a;
    } else{
        return b;
    }
}

int gcd(int a, int b){
    int hcf;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0  &&  b%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int main()
{
    int a,b;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;

    int hcf=gcd(a,b);
    cout<<"The HCF of "<<a<<" & "<<b<<" is :"<<hcf;

    return 0;
}