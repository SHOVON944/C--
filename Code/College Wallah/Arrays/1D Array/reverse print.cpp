#include<iostream>
using namespace std;

int main()
{
    int a[]{3,5,2,6,7,8,4,44,24,75};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0; i<n; i++){
        int j= n-1-i;
        b[i]=a[j];
        cout<<b[i]<<" ";
    }
    return 0;
}