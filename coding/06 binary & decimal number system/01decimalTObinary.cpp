//converting decimal into binary
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int ans=0;
 int i=0;
 while(n!=0){
  int bit=(n&1);
  ans=(bit* pow(10,i))+ans;
  n=n>>1;
  i++;
 }
 cout<<"Decimal conversion is "<<ans<<"\n";
}
*/
//converting negative decimal to binary
//wrong
#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int ans=0;
 int i=0;
 while(n!=0){
  int bit=(n&1);
  ans=(bit*pow(10,i))+ans;
  n=n>>1;
  i++;
 }
 cout<<"negative digit in binary answer is"<<~ans;
}