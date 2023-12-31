#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the amount" << endl;
    cin >> n;

    int num;
    cin >> num;
    int ans;
    int ans1;
    int ans2;
    int ans3;
    int ans4;
    switch (num)
    {

    case 1:
        cout << (ans = n / 100) << "  "
             << "100 rupees ke itne note cahiye " << "   "<< (ans1 = n - ans * 100) << endl;

    case 2:
        cout << (ans2 = ans1/20) << "  "
             << " 20 rupees ke itne note chahiye" <<" " <<endl;
             
             ans3 = ((ans*100) +10)-ans*100;
     //(ans3 = ans1-ans2*10)

    case 3:
        cout << (ans4= ans3/1) << "  "
             << " 1 rupees ke itne note chahiye" << endl;

        break;

    default:
        cout << "chuteee nhi hai" << endl;
    }
}