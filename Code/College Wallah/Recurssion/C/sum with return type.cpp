#include<iostream>
using namespace std;

int add(int n){
    if(n==0){
        return 0;
    }
    return n+add(n-1);
}
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int sum=add(n);
    cout<<"The sum is :"<<sum;
    return 0;
}