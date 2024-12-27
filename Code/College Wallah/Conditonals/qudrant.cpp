#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter X/-X axis point number: ";
    cin>>x;
    cout<<"Enter Y/-Y axis point number: ";
    cin>>y;

    if(x>0 && y>0){
        cout<<"1st Quardant";
    } else if(x>0 && y<0){
        cout<<"4th Quardant";
    } else if(x<0 && y>0){
        cout<<"2nd Quardant";
    } else if(x<0 && y<0){
        cout<<"3rd Quardant";
    } else{
        cout<<"Middle position ";
    }

    return 0;
}