#include<iostream>
using namespace std;

int pow(int n,int m){
    if(m==0){
        return 1;
        }
    return n*pow(n,m-1);
}
int main()
{
    int n,m;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter m :";
    cin>>m;
    int p=pow(n,m);
    cout<<"The "<<n<<"of "<<m<<" power is :"<<p;
    return 0;
}