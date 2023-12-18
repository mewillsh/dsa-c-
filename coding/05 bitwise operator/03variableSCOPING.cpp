//substract the product and sum of the digit of an integer

#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int product=1;
 int sum=0;
 while(n!=0){
  int digit=n%10;
  product=product*digit;
  sum=digit+sum;
  n=n/10;
 }
 cout<<product-sum<<"\n";
}