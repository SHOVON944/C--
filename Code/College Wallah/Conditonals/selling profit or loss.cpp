#include<iostream>
using namespace std;

int main()
{
    int cp,sp;
    cout<<"Enter cost price :";
    cin>>cp;
    cout<<"Enter lost price :";
    cin>>sp;

    if(cp>sp){
        cout<<"You Loss"<<endl;
        cout<<"And the Loss price is :"<<cp-sp;
    } else if(sp>cp){
        cout<<"You Profit";
        cout<<"And the Profit price is :"<<sp-cp;
    } else{
        cout<<"No Profit no Loss";
    }

    return 0;
}