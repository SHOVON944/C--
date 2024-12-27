#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number you want to sum of digit :";
    cin>>n;

    int ld=0;         // ld=last digit
    int sum=0;
    while(n>0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    cout<<"The number you have given its digit sum is :"<<sum;

    return 0;
}