#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number you want to print sum of even digit :";
    cin>>n;

    int sum =0;
    while(n>0){
        int ld=n%10;
        if(ld%2==0){
            sum=sum+ ld;
        }
        n=n/10;
    }
    cout<<"The number you have given its sum of even digit is :"<<sum;

    return 0;
}