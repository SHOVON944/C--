#include<iostream>
using namespace std;

int main()
{
    int  det[4][2] = {{1,90},{2,87},{3,88},{4,84}};
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout<<det[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}