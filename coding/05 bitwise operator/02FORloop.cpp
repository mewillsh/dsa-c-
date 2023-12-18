//for(initialision value,condition,increment or decrement){}
/*#include<iostream>
using namespace std;
int main(){
 cout<<"write the value of N"<<"\n";
 int n;
 cin>>n;
 cout<<"value of N is"<<"\n";
 for(int i=1;i<=n;i++){
  cout<<i<<"\n";
 }
}

//break condition {used to get out from loop statement}

#include<iostream>
using namespace std;
int main(){
 cout<<"write the value of N"<<"\n";
 int n;
 cin>>n;
 cout<<"value of N is"<<"\n";
 int i=1;
 for( ; ; ){
  if(i<=n){
   cout<<i<<"\n";
  }
  else{
   break;
  }
  i++;
 }
}

//we can write multipal condition in for loop

#include<iostream>
using namespace std;
int main(){
 for(int a=0,b=1;a>=0 && b>=1;a--,b--){
  cout<<a<<" "<<b<<" "<<"\n";
 }
}

//write the sum of total number til N

#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"write the value of N"<<"\n";
 cin>>n;
 int sum=0;
 for(int i=1;i<=n;i++){
  sum+=i;
 }
 cout << sum << "\n";
}

//write the fibonachi number till n

#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"write the value of N"<<"\n";
 cin>>n;
 int a=0;
 int b=1;
 cout<<a<<" "<<b<<" ";
 for(int i=1;i<=n;i++){
  int nextNUMBER=a+b;
  cout<<nextNUMBER<<" ";
  a=b;
  b=nextNUMBER;
 }
}

//print whether the number is prime or not prime and learing how to use break

#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"write the value of N"<<"\n";
 cin>>n;
 bool isprime=1;
 for(int i=2;i<n;i++){
  if(n%i==0){
   isprime = 0;
   break;
  }
 }
 if(isprime==0){
  cout<<"is not a prime number";
 }
 else{
  cout<<"it is a prime number";
 }
}

//learing how to use CONTINUE

#include<iostream>
using namespace std;
int main(){
 for(int i=1;i<=5;i++){
  cout<<"hye"<<"\n";
  cout<<"hello !"<<"\n";
  continue;
  cout<<"replay bhi kar de bhai"<<"\n";
 }
}
*/
