#include<iostream>
using namespace std;

int func(int n){
    if(n==1) return 1;
    return n+func(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int sum=func(n);
    cout<<"The number of 1 to "<<n<<" sum is :"<<sum;
    return 0;
}