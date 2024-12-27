#include<iostream>
using namespace std;

int main()
{
    int l,b;
    cout<<"Enter the lenth of rectengle :";
    cin>>l;
    cout<<"Enter the breath of rectengle :";
    cin>>b;
    int area = l*b;
    int perimeter = 2*(l+b);
    cout<<"The area of rectengle is :";
    cout<<area<<endl;
    cout<<"The perimeter of rectengle is :";
    cout<<perimeter<<endl;

    if(area >= perimeter){
        cout<<"Area is greater than Perimeter. It's true."<<endl;
    } else{
        cout<<"Perimeter is greater than Area. It's false"<<endl;
    }
    return 0;
}