#include<iostream>
using namespace std;

int formula(int n,int m){
    int power=1;
    for(int i=1; i<=m; i++){
        power=power*n;
    }
    return power;
}
int main()
{
    int n,m;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter m :";
    cin>>m;
    int p=formula(n,m);
    cout<<"The "<<n<<" of "<<m<<" power is :"<<p;
    return 0;
}