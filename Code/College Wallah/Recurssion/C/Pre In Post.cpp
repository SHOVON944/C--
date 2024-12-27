#include<iostream>
using namespace std;

void P_I_P(int n){
    if(n==0){
        return;
    }
    cout<<"Pre "<<n<<endl;
    P_I_P(n-1);
    cout<<"In "<<n<<endl;
    P_I_P(n-1);
    cout<<"Post "<<n<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    P_I_P(n);
    return 0;
}