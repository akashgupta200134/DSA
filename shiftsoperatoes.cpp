#include <iostream>
using namespace std;

int main()
{

    int A = 3;
    int B = 5;

    cout << "Left shift : " << (A << 2) << endl;
    cout << "Left shift : " << (A << 3) << endl;
    cout << "Right shift : " << (B >> 2) << endl;
    cout << "Right shift : " << (B >> 3) << endl;

    cout<<(21>>2)<<endl;
         cout<<(21<<2)<<endl;



// inncrement & decrement operators

int  i = 8;
cout<<(i--)<<endl;
cout<<i<<endl;
cout<<(--i)<<endl;
cout<<(++i)<<endl;
cout<<(i++)<<endl;
cout<<i<<endl;


int m , n = 1;
 m =10;

 if (++m)
 cout<< n<<" "<<endl;
 else 
 cout<<++n;



 int g = 1;
 int h = 2;

 if (g-- > 0 && ++h >2){
    cout<<"stage1 -  inside if "<<endl;

 }
 else{
    cout<<"stage2 - inside else"<<endl;
 }

 cout<< g << " " << h <<endl;


int num = 3;

cout<<(25 * (++num))<<endl;


int num1 = 1;
int num2 = num1++;

int num3 = ++num1;

cout<< num2<<endl;
cout<< num3<<endl;


}



