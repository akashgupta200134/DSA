#include <iostream>
using namespace std;

int main()
{
        int a;
        int b;
        cout << "enter the value of a" << endl;
        cin >> a;
        cout << "The value of a  is :" << a << endl;
        cout << "enter the value of b" << endl;
        cin >> b;
        cout << "The value of b  is :" << b << endl;

        int c = a + b;
        cout << "the sum of a and b is: " << c << endl;

    /// if conditionals
    int n ;
    cin>>n;
    if(n>0){
    cout<<"N is a positive number"<<endl;
    }
    else if(n<0)
     {
     cout<<"N is negative number:"<<endl;}
    else{
        cout<<"N is neither negative or nor postive"<<endl;
    }

    int f, h;

    cout<<" enter the value of f :"<<endl;
    cin>>f;

    cout<<"enter the value of h:"<<endl;
    cin>>h;

    if (f>h){
        cout<<"F is greater"<<endl;
    }
    else{
        cout<<"h is greater"<<endl;
    }

    //output question

    int d = 9;

    if(d == 9){

    cout<<"niney"<<endl;
    }

    if(d>0){
        cout<<"D is positive"<<endl;

    }
    else{
        cout<<"negative"<<endl;
    }

    int j = 2;
    int v = j + 1;

    if ((j = 3) == v)
    {
        cout << j << endl;
    }

    else
    {
        cout << j + 1;
    }



// hw question for  characters 
    char ch;
    cout << "enter the value :" << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "this is lower case" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "this is a upper case" << endl;
    }
    else
    {
        cout << "this is a digit" << endl;
    }
}
