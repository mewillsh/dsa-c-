// jab tak tumhare jeb me paise rehenge tab tak tum kele kha sakate ho
/*#include<iostream>
using namespace std;
int main(){
 int n;
 cin>> n;
 int i=1;
 while(i<=n){
  cout<<i<<" "<<endl;
  i=i+1;
 }
}
*/

// print the sum of input number

/*#include<iostream>
using namespace std;
int main(){
 int n;
 cin >>n;
 int i=1;
 int sum=0;
 while(i<=n){
  sum=sum+i;
  i=i+1;
 }
 cout<<"the sum of the given number is "<<sum<<endl;
}

#include<iostream>
using namespace std;
int main(){
 int n;
 cin >> n;
 int sum=0;
 int i=2;

 while(i<=n){
  sum=sum+i;
  i=i+2;
 }
 cout<<"sum of the even number till N is "<<sum<<endl;
}
*/

// find number is prime or composite
#include <iostream>
using namespace std;
int main()
{
 int n;
 cin >> n;
 int i = 2;
 while (i < n)
 {
  if (n % i == 0)
  {
   cout << "this is not a prime number for " << i << endl;
  }
  else
  {
   cout << "this is prime number for" << i << endl;
  }
  i = i + 1;
 }
}
