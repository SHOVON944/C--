#include<iostream>
using namespace std;

int factorial(int x){
        int fact =1;
    for(int i=2; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int mathformula(int n, int r){
    int nc=factorial(n)/(factorial(r)*factorial(n-r));
    return nc;
}

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int a=n;
    for(int i=0; i<=n; i++){
        for(int k=1;k<=a;k++){
            cout<<" ";
        }
        a--;
        for(int j=0; j<=i; j++){
            int ncr = mathformula(i,j);
            cout<<ncr<<" ";
        }
        cout<<endl;
    }
    return 0;
}