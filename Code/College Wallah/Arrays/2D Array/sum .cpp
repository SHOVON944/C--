#include<iostream>
using namespace std;

int main()
{
    int a[3][3] = {{-2,7},{3,1},{2,8}};
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum= sum + a[i][j];
        }
    }
    cout<<"Enter the min number is:"<<sum;
    return 0;
}