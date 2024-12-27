#include<iostream>
using namespace std;

int factorial(int a){
    if(a==1  ||  a==0){
        return 1;
    }
    return a*factorial(a-1);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int fact=factorial(n);
    cout<<"The factorial of "<<n<<" is :"<<fact;

    return 0;
}