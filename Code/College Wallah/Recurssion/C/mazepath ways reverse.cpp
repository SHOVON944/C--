#include<iostream>
using namespace std;

int maze(int n, int m){
    int rightWays=0;
    int downWays=0;
    if(n==1  &&  m==1){
        return 1;
    } if(n==1){
        rightWays += maze(n,m-1);
    } if(m==1){
        downWays += maze(n-1,m);
    } if(n>1  &&  m>1){
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    int TotalWays = rightWays + downWays;
    return TotalWays;
}
int main()
{
    int n,m;
    cout<<"Enter number of rows :";
    cin>>n;
    cout<<"Enter number of coloums :";
    cin>>m;
    int NoOfWays=maze(n,m);
    cout<<"The number of ways "<<n<<"*"<<m<<" is :"<<NoOfWays;
    return 0;
}