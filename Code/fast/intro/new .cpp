#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main()
{
    int a,b,summ;
    cout<<"Enter First num: " << endl;
    cin>>a;
    cout<<"Enter Second num: " << endl;
    cin>>b;
    summ=sum(a,b);
    cout<<"The sum is :" <<summ<<endl;
    return 0;
}