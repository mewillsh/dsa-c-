/*#include<iostream>
using namespace std;

int main(){
 int a;
 cout<<"write the value of a"<<endl;
 cin>>a;

 if(a>0){
  cout<<"a is the positive number"<<endl;
 }
 else{
  if(a<0){
   cout<<"a is the negative number"<<endl;
  }
  else{
   cout<<"a is zero"<<endl;
  }
 }
}*/

//now writing the code with if else if

/*#include<iostream>
using namespace std;

int main(){
 int a;
 cout<<"write the value of A"<<endl;
 cin>>a;

 if(a>0){
  cout<<"this is positive number"<<endl;
 }
 else if(a<0){
  cout<<"this is negative number"<<endl;
 }
 else{
  cout<<"this is zero"<<endl;
 }
}

#include<iostream>
using namespace std;
 int main(){
  int a=24;
  if(a>20){
   cout<<"love"<<endl;
  }
  else if(a==24){
   cout<<"lovely"<<endl;
  }
  else{
   cout<<"babbar";
  }
  cout<<a;
 }
 */

//home work

#include<iostream>
using namespace std;

int main(){
 char ch;
 cout<<"write the character "<<endl;
 cin>>ch;
 
 if(ch>='a' && ch<='z'){
  cout<<"this is lower case"<<endl;
 }
 else if(ch>='A' && ch<='Z'){
  cout<<"this is upper case"<<endl;
 }
 else{
  cout<<"this is number"<<endl;
 }
}