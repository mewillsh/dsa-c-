// power of something function

/*#include<iostream>
using namespace std;
int power(){
 int a,b;
 cin>>a>>b;
 int ans=1;
 for(int i=1;i<=b;i++){
  ans=ans*a;
 }
 return ans;
}
int main(){
 int answer=power();
 cout<<"answer is "<<answer<<"\n";
 return 0;
}

// even odd functions

#include<iostream>
using namespace std;
bool isEVEN(int a){
 if(a&1){
  return 0;
 }
 else{
  return 1;
 }
}
int main(){
 int num;
 cin>>num;
if(isEVEN(num)){
 cout<<"this is even number"<<"\n";
}
else{
 cout<<"this is odd number"<<"\n";
}
}

// in this function we are going to find nCr

#include<iostream>
using namespace std;
int factorial(int a){
 int ans =1;
 for(int i=1;i<=a;i++){
  ans=ans*i;
 }
 return ans;
}
int nCr(int n,int r){
 int nemo=factorial(n);
 int deno=factorial(r)*factorial(n-r);
 return nemo/deno;
}
int main(){
 int n,r;
 cin>>n>>r;
 cout<< "The value of nCr is "<<nCr(n,r)<<"\n";
}
*/

// printing the counting by calling the function

#include<iostream>
using namespace std;
//function body
void countingFUN(int n){
 for(int i=1;i<=n;i++){
  cout<<" "<<i;
 }
 cout<<"\n";
}
int main(){
 int a;
 cin>>a;
 //function call
 countingFUN(a);
}