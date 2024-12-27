#include<iostream>
using namespace std;

int main()
{
    int x=243245;
    string s= to_string(x);
    int n = s.length();
    cout<<"The length of the number is : "<<n;
    return 0;
}