#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp;
    temp = *x;  // temp =2
    *x=*y;  //a=9
    *y=temp;  //+y = 2 -> b=2
    return;
}

int main()
{
    int a,b;
    a=2;
    b=5;

    swap(&a,&b);
    cout<<"Enter swap a is :"<<a<<endl;
    cout<<"Enter swap b is :"<<b<<endl;

    return 0;
}