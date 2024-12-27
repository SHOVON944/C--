#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    int x=pow(a,b/2);
    if(b%2==0){
        return x*x;
    } else{
        return x*x*a;
    }
}
int main()
{
    int a,b;
    cout<<"Enter base :";
    cin>>a;
    cout<<"Enter power :";
    cin>>b;
    int calculate=pow(a,b);
    cout<<a<<" raised to the power "<<b<<" is :"<<calculate;
    return 0;
}