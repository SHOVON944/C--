#include<iostream>
using namespace std;
int stairs(int n){
    if(n==1){                   // or (n==1  ||  n==2){ return n};
        return 1;               // or (n<=2){ return n};
    } if(n==2){
        return 2;
    }
    int stairspath = stairs(n-1)+stairs(n-2);
    return stairspath;
}
int main()
{
    int n;
    cout<<"Enter the number of stairs :";
    cin>>n;
    int numOfWays=stairs(n);
    cout<<"The number of ways :"<<numOfWays;
    return 0;
}