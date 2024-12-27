#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1  || n==2){
        return 1;
    }
    int fibo1=fibo(n-1);        //return fib(n-1)+fibo(n-2);
    int fibo2=fibo(n-2);
    int ans=fibo1+fibo2;
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number that you want to check fibonaci number :";
    cin>>n;
    int fibonaci=fibo(n);
    cout<<"The fibonaci number of "<<n<<" is : "<<fibonaci;
    return 0;
}