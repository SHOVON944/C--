#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter student marks :";
    cin>>n;

    if(100>=n  &&  n>80){
        cout<<"The student grade is Very Good";
    } else if(80>=n  &&  n>60){
        cout<<"The student grade is Good";
    } else if(60>=n  &&  n>40){
        cout<<"The student grade is Average";
    } else if(40>=n  &&  n>=0){
        cout<<"The student grade is Fail";
    } else{
        cout<<"The marks you have given is invalid";
    }

    return 0;
}