#include <iostream>
using namespace std;

int fabo(int n)
{

    int a = 0;
    int b = 1;
  int  count = 0;
   // int nextnumber;
    for (int i = 2; i < n; i++)
    {
       int  nextnumber = a + b;
        a = b;
       b= nextnumber; 
       count ++;
       
    }

    return b;

}

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    cout << "answer is " << fabo(n) << endl;
}