#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    switch (num)
    {

    case 1:
        cout << "first number" << endl;
        continue;

    case 2:
        cout << " second number" << endl;
        continue;

    default:
        cout << "wrong number" << endl;
    }

    
}

/// conclusion -- Switch case is conditional block not a loop so we cannot execute the 
    //    continue statement inside switch. Moreover, The continue statement applies only to loops, 
    //   not to a switch statement. A continue inside a switch inside a loop causes the next loop
    //    iteration.
