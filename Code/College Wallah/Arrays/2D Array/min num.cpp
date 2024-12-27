#include<iostream>
using namespace std;

int main()
{
    int a[3][3] = {{2,7},{3,1},{2,8}};
    int mn = INT_MAX;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            mn= min(mn,a[i][j]);
        }
    }
    cout<<"Enter the min number is:"<<mn;
    return 0;
}