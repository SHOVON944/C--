#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number you want to checkout factorial :";
    cin>>n;

    int sum=1;
    for(int i=n; i>0; i--){
        sum=sum*i;
    }
    cout<<"The number you have given its factorial sum is :"<<sum;

    return 0;
}