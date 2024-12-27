#include<iostream>
using namespace std;

int factorial(int x){
        int fact =1;
    for(int i=2; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int nf,rf;
    cout<<"Enter n :";
    cin>>nf;
    cout<<"Enter r :";
    cin>>rf;
    int ncr=factorial(nf)/(factorial(rf)*factorial(nf-rf));
    cout<<"nrf is:"<<ncr;

    return 0;
}