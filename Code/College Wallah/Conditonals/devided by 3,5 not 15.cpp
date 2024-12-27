#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;

    if((n%3 == 0  ||  n%5 == 0)  &&  (n%15 != 0)){
        cout<<"Yes,The number you have input that is devided by 3,5.Except 15.";
    } else{
     cout<<"No,The number you have input that is not devided by 3,5.Except 15.";
    }

    return 0;
}