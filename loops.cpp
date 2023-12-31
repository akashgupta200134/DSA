#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cout<<"enter the value of n :"<<endl;
    // cin>>n;

    // int i = 1;

    // while(i<=n){
    //     cout<<i<<endl;
    //     i = i+1;
    // }

    // int n;
    // int sum = 0;

    // cout << "enter the value of n:" << endl;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 1;

    //     }
    //     cout << "the sum is:" << sum << endl;

    // find the sum of all even numbers

    // int n;
    //  cout<<"enter the value of n"<<endl;

    // cin>>n;

    // int i=1;
    // int sum = 0;

    // while(i<=n)
    // {
    //   if(i%2==0){
    //    sum = sum +i;
    // }
    //   i = i+1;
    // }
    // cout<<"the sum is :"<<sum<<endl;

    // find the prime number

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int i = 2;

    while (i < n)
    {

        if (n % i == 0)
        {
            cout << "it is not a prime number" << endl;
        }
        else
        {
            cout << "it is  a prime number" << endl;
        }
        i = i + 1;
    }
}
