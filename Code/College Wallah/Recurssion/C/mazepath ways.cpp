#include<iostream>
using namespace std;

int maze(int cr,int cc,int er,int ec){
    int rightWays=0;
    int downWays=0;
    if(cr==er  &&  cc==ec){
        return 1;
    } if(cr==er){
        rightWays += maze(cr,cc+1,er,ec);
    } if(cc==ec){
        downWays += maze(cr+1,cc,er,ec);
    } if(cc<ec  &&  cr<er){
        rightWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
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
    int NoOfWays=maze(1,1,n,m);
    cout<<"The number of ways "<<n<<"*"<<m<<" is :"<<NoOfWays;
    return 0;
}