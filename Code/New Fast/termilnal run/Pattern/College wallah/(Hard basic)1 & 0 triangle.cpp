#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int a;                                 // or,,,
    for(int i=1; i<=n; i++){               // int a;
        if(i%2!=0){                        //for(int i=1; i<=n; i++){
            a=1;                           //   for(int j=1; j<=i; j++){}
        } else{                            //       if((i+j)%2==0){
            a=0;                           //        cout<<'1';
        }                                  //        } else{
        for(int j=1; j<=i; j++){           //          cout<<'0';
            cout<<a<<" ";                  //          }
            if(a==0){                      //        }
                a=1;                       //        cout<<endl;
            } else{                        //      }
                a=0;
            }
        }
        cout<<endl;
    }

    return 0;
}