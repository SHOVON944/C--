#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the 3 number :"<<endl;
    cin>>a>>b>>c;

    if(a<b  &&  a<c){
        cout<<"The less than number is :"<<a;
    } else if(b<a  &&  b<c){
        cout<<"The less than number is :"<<b;
    } else{
        cout<<"The less than number is :"<<c;
    }

    return 0;
}