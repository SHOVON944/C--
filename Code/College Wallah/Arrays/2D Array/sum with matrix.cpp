#include<iostream>
using namespace std;

int main()
{
    int a[2][2] = {{2,3},{3,1}};
    int b[2][2] = {{4,2},{5,2}};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            int c[i][j] = {a[i][j] + b[i][j]};
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}