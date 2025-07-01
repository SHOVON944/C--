#include<bits/stdc++.h>
using namespace std;

void fact(int x){
    if(x==0) return;

    fact(x-1);
    cout<<x<<endl;
    return;
}

int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}