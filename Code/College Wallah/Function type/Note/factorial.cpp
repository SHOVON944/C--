#include<iostream>
using namespace std;

int factorial(int x){
   if(x==0) return 1;
   int fact = x * factorial(x-1);
   return fact;
}
int main()
{
   int n;
   cin>>n;
   int ans= factorial(n);
   cout<<"Answer is :"<<ans;
   return 0;
}