#include<bits/stdc++.h>
using namespace std;

void func(int x){
    if(x==0) return ;
    cout<<x<<endl;
    func(x-1);
    cout<<x<<" ";
    return ;
}

int main()
{
    int n;
    cin>>n;
    func(n);
    
    return 0;
}