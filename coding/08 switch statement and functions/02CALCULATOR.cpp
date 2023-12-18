#include<iostream>
using namespace std;
int main(){
 int a,b;
 cout<<"write the first value ";
 cin>>a;
 cout<<"write the value of second number ";
 cin>>b;
 char ch;
 cout<<"write the operation type ";
 cin>>ch;
 cout<<"\n";

 switch(ch){
  case '+' :cout<<a+b<<"\n";
  break;
  case '-':
  cout << a - b << "\n";
  break;
  case '*':
  cout << a * b << "\n";
  break;
  case '/':
  cout << a / b << "\n";
  break;
  default : cout<<"write the value properly";
 }
 return 0;
}



//number of the notes required in total money

