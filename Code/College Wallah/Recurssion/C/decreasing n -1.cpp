#include<iostream>
using namespace std;

void formula(int x){
    if(x==0){
        return ;
    }
    cout<<x<<endl;
    formula(x-1);
    return;
}
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    formula(n);
    return 0;
}