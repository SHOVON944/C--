#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        for(int j=0; j< size; j++){
            if(arr[i]+arr[j]==target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                return 0;
            }
        }
    }
    cout<<"No solution found"<<endl;

    return 0;

}