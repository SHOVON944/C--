#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the number range that you want to the prime number list-\n";
    int a, b;
    cout<<"Enter the start Number :";
    cin >> a;
    cout<<"Enter the last Number :";
    cin >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}