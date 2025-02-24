#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    while(a--){
        int x,y;
        cin>>x>>y;
        if(y == x+1){
            cout<<"YES"<<endl;
            continue;
        }
        int difference=x-y+ 1;
        if(difference>0  &&  difference%9==0){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}