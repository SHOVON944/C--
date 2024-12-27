#include<iostream>
using namespace std;

int main()
{
    int a=1;
    int i=65;
    while(i<=90){
        char ch=(char)(a+64);
        cout<<"The Alphabate of "<<ch<<" "<< "ASCII value is "<<i<<endl;
        i++;
        a++;
    }

    return 0;
}