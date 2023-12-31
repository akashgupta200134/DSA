#include<iostream>
using namespace std;

int arithmetic(int n){


 int AP = 3 * n +7;

return AP;


}

int main(){

int n ;
cout<< "enter the value of n " << endl;
cin>>n;

cout<<"The nth term is :-"<<arithmetic(n)<<endl; 

return 0 ;


}