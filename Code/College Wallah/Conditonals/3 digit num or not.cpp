#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the three digit number :";
    cin>>n;

    if(n>99 && n<1000){
        cout<<"It's a three digit number.";
    } else{
        cout<<"It's not a three digit number.";
    }

    return 0;
}