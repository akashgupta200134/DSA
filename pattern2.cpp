#include <iostream>
using namespace std;

int main()
{

    //  int n;
    //  cin>> n;

    //  int i = 1;
    //  char value= 'A';

    //  while(i<=n){
    // int j = 1;
    //  while(j<=i)
    // {
    //     cout<< value;
    //     value = value +1;
    //     j = j+1;

    // }
    //     cout<< endl;
    //     i = i +1;

    //  }

    // int n;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A'+ i + j - 2;
    //         cout << ch;
    //         ch = ch + 1;
    //         j = j+1;
    //     }

    //     cout<<endl;
    //     i = i+1;
    // }

    // int n ;
    //  cin>>n;
    //  int i= 1;
    //   while(i<=n){

    //     int j = 1;
    //     while(j<=i){
    //         char ch = 'D' -i+j;
    //         cout<<ch<<" ";
    //       //  ch = ch- 1;
    //         j = j+1;

    //     }

    //     cout<<endl;
    //     i = i+1;

    //     }

    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' - n + i + j + 1;
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
