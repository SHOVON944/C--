#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numbers :";
    cin>>n;
    int arr[n];
    int oddadd=0;
    int evenadd=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i%2!=0){
            oddadd += arr[i];
        } else{
            evenadd += arr[i];
        }
    }
    int mainminus = oddadd - evenadd;
    cout<<"The odd number add is :"<<oddadd<<endl;
    cout<<"The even number add is :"<<evenadd<<endl;
    cout<<"The odd number minus even number is :"<<mainminus<<endl;
    return 0;
}
