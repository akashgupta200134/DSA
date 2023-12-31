#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter the value" << endl;
    cin >> num;
    switch (num)
    {

    case 1:
        cout << "first number" << endl;
        break;

    case 2:
        cout << "second number" << endl;
        break;

    default:
        cout << "it is not in the list" << endl;
    }
}

