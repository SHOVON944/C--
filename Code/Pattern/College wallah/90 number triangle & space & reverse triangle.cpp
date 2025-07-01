#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int nnm=n;
    int nsp=1;

    for(int i=1; i<=1; i++){
        int a=1;
        int b=n;
        for(int j=1; j<=2*n+1; j++){
            if(j<=n+1){
                cout<<a<<" ";
                a++;
            } else{
                cout<<b<<" ";
                b--;
            }
        }
    }
    cout<<endl;

    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=nnm; j++){
            cout<<a<<" ";
            a++;
        }
        for(int k=1; k<=nsp; k++){
            cout<<"  ";
        }
        int b=n+1-i;                            //  3 2 1
        for(int p=1; p<=nnm; p++){              //    2 1
            cout<<b<<" ";                       //      1
            b--;                                //  sequence maintaince er jonne......
        }
        cout<<endl;
        nnm--;
        nsp+=2;
    }

    return 0;
}