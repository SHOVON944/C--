#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number you want to reverse :";
    cin>>n;
    int nr =0;         // nr-> num reverse
    int ld=0;
    while(n>0){
        ld= n%10;
        nr = (nr*10)+ld;
        n /=10;              // n=n/10
    }
    cout<<"The number you have given its reverse is :"<<nr;

    return 0;
}