#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the amount" <<endl;
cin>>n;

int Rs100 ,Rs50, Rs20,Rs1;

switch(1){
 case 1 : Rs100 = n/100;
 n = n %100;
cout<<Rs100 <<"  "<<"100 rupees ke itne note cahiye "<<endl;

case 2: Rs50 = n/50;
n = n%50;

cout<<Rs50<<"  "<<" 50 rupees ke itne note chahiye"<<endl;

case 3 : Rs20 = n/20;
n = n%20;

cout<<Rs20 <<"  "<<" 20 rupees ke itne note chaiye"<<endl;

case 4 : Rs1 = n/1;
n = n%1;

cout<<Rs1<< "  "<<" 1 rupees ke itne note chaiye"<<endl;







}







}