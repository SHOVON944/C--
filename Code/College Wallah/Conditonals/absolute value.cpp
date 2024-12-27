#include<iostream>
using namespace std;

int main()
{
    int n;                                // if(n<0){
    cout<<"Enter the number :";           //    n = -n;
    cin>>n;                               //    }
                                          //    cout<<n;
    if(n>=0){
        cout<<n;
    } else{
        cout<< -n;
    }

    return 0;
}