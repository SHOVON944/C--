#include<iostream>
using namespace std;

void functionCall(int x){
    if(x==0){
        return;
    }
    functionCall(x-1);
    cout<<x<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    functionCall(n);
    return 0;
}