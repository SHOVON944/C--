#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number that devided by 3 & 5 :";
    cin>>n;

    if(n%3==0 && n%5==0){
        cout<<"Yes,The number of"<<n<<"is divided by 3 and 5";
    } else{
        cout<<"No,The number of"<<n<<"is not divided by 3 and 5";
    }

    return 0;
}