#include<iostream>
using namespace std;

int main()
{
    int a[3][3] = {{2,0},{3,1},{2,8}};
    int mx = INT_MIN;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mx= max(mx,a[i][j]);
        }
    }
    cout<<"Enter the max number is:"<<mx;
    return 0;
}