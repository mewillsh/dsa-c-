/*
#include<iostream>                     // 0 2 4
using namespace std;
int main(){
for(int i=0;i<=5;i++){
 cout<<i<<" ";
 i++;}
}

//homework 2

#include<iostream>                   //0 0 0 ....infinite
using namespace std;
int main(){
 for(int i=0;i<=5;i--){
  cout<<i<<" ";
  i++;
 }
}

//homework 3

#include<iostream>
using namespace std;
int main(){
 for(int i=0;i<=15;i+=2){
  cout<<i<<" ";
  if(i&1){
   continue;
  }
  i++;
 }
}
*/
//homework 3

#include<iostream>
using namespace std;
int main(){
 for(int i=0;i<5;i++){
  for(int j=i;j<=5;j++){
   cout<<i<<" "<<j<<" "<<"\n";
  }
 }
}