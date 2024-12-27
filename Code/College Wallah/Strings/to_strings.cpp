#include<iostream>
using namespace std;

int main()
{
    int x=243245;
    cout<<x<<endl;
    string s= to_string(x);
    cout<<s<<endl;
    s= s + "dd";
    cout<<s<<endl;
    return 0;
}