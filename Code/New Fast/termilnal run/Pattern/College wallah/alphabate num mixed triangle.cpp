#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    for(int i=1; i<=n;i++){
        int a=1;
        for(int j=1; j<=i; j++){
            char ch=(char)(a+64);
                if(i%2!=0){
                    cout<<j<<" ";
                }
                else{
                    cout<<ch<<" ";
                }
                a++;
        }
        cout<<endl;
    }

    return 0;
}