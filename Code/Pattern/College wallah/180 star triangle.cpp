#include<iostream>
using namespace std;

int main()                        //or  int n=a ;
{                                 //    for(int i=1;i<=n;i++){
    int n;                        //       for(int j=1;j<=a;j++){
    cout<<"Enter the number:";    //     cout<<"* ";
    cin>>n;                       //    }
                                  //     a--;
    for(int i=1; i<=n; i++){      //     cout<<endl;  }
        for(int j=1; j<=n+1-i; j++){         //  i+j=n+1  or  j=n+1-i
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}