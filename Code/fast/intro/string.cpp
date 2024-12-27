#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "Clash";

    cout<<"The name is :"<<name<<endl;
    cout<<"The legnth of name is :" <<name.length()<<endl;
    cout<<"The name is :"<<name.substr(0,2)<<endl;
    cout<<"The name is :"<<name.substr(3,5)<<endl;

return 0;
}