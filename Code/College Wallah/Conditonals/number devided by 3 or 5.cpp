#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number that devided by 3 or 5 :";
    cin>>n;

    if(n%3 == 0  ||  n%5 == 0){
        cout<<"Yes,the number "<<n<<" is devided by 3 or 5";
    } else{
        cout<<"No,The number "<<n<<" is not devided by 3 or 5";
    }

    return 0;
}