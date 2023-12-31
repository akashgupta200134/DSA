#include <iostream>
using namespace std;

bool iseven(int a)
{
    if (a & 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isodd(int a)
{
    return (a & 1);
}

int main()
{
    int n;
    cin >> n;

    if (iseven(n))
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }


    
    cin >> n;


    if (iseven(n))
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }


     
    cin >> n;


    if (iseven(n))
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }

    return 0;
}
