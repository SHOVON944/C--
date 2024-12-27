#include<iostream>
using namespace std;

int formula(int x){
    int math=1;
    for(int i=2; i<=x; i++){
        math = math * i;
    }
    return math;
}

int factorial(int c, int d){
    int fact = formula(c)/(formula(d) * formula(c-d));
    return fact;
}

int main()
{
    int n;
    cout<<"Ente n:";
    cin>>n;
    int a=n;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=a; j++){
            cout<<" ";
        }
        a--;
        for(int k=0; k<=i; k++){
            int ncr=factorial(i,k);
            cout<<ncr<<" ";
        }
        cout<<endl;
    }

    return 0;
}