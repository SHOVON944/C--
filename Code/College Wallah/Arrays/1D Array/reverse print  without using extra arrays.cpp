#include<iostream>
using namespace std;

int main()
{
    int a[]={2,4,53,2,5,365,2,43};
    int n=sizeof(a)/4;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    //reverse
    int i=0;
    int j=n-1;
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}