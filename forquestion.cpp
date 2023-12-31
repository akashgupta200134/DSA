#include <iostream>
using namespace std;
// question-1
int main()
{

    // for(int i=0; i<=5;i++){

    //     cout<< i <<" ";
    //     i++;
    // }

    // question-2

    //     for (int i = 0; i <= 5; i--)
    //     {
    //         cout << i << " ";
    //         i++;
    //     }
    // }

    // question -3

    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";

    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }

    // quesstion-4

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }

    // question-5

    for (int i = 0; i <5; i++)
    {
        for (int j = i; j <=5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}

