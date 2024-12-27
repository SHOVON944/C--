#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the 1st side of triangle :";
    cin>>a;
    cout<<"Enter the 2nd side of triangle :";
    cin>>b;
    cout<<"Enter the 3rd side of triangle :";
    cin>>c;

    if((a+b)>c  and  (b+c)>a  &&  (c+a)>b){
        cout<<"Yes, it is a triangle.";
    } else{
        cout<<"No, it is not a triangle.";
    }

    return 0;
}