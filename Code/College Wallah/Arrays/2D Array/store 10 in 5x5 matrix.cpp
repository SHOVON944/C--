#include<iostream>
using namespace std;

int main()
{
    int ten[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            ten[i][j]=10;
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<ten[i][j]<<" ";
        }
        cout<<endl;
    }
}