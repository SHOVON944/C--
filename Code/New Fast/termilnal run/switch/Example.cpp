#include <iostream>
using namespace std;

int main()
{
    char press;
    cout << "Enter a character :";
    cin >> press;

    switch (press)
    {
    case 'a':
        cout << "Archer" << endl;
        break;
    case 'b':
        cout << "Barbrain" << endl;
        break;
    case 'c':
        cout << "Clan castle" << endl;
        break;
    case 'd':
        cout << "Dragon" << endl;
        break;
    case 'e':
        cout << "Eagle arthilarry" << endl;
        break;

    default:
        cout << "No Charcter of Clash of Clans";
        break;
    }
    return 0;
}