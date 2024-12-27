#include<iostream>
using namespace std;

int main()
{
    int i=65;
    int a=1;
    while(i<=90){
        char ch=(char)(a+64);
        cout<<ch<<endl;
        i++;
        a++;
    }
    return 0;
}