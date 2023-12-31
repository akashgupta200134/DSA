#include <iostream>
using namespace std;

int fabo(int n)
{

    int a = 0;
    int b = 1;

    int nextnumber;
    for (int i = 0; i <= n; i++)
    {
        nextnumber = a + b;
        a = b;
       b= nextnumber; 

       
    }
    return nextnumber;
}

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    cout << "answer is " << fabo(n) << endl;
}