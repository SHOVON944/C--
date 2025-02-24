#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int nsp = n-1;
    int nstr = 1;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        for(int k=1; k<=nstr; k++){
            cout<<"*";
        }
        nsp--;
        nstr +=2;
        cout<<endl;
    }
    int nstr2 = 2*n-1;
    int nsp2 = 0;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=nsp2 ; j++){
            cout<<" ";
        }
        for(int k=nstr2; k>=1; k--){
            cout<<"*";
        }
        nstr2-=2;
        nsp2++;
        cout<<endl;
    }
    return 0;
}