/*
//pattern 15

#include<iostream>             //A
using namespace std;           //B B
int main(){                    //C C C
 int n;
 cin>>n;
 int row=1;
 while(row<=n){
  int column=1;
  char ch=('A'+row-1);
  while(column<=row){
   cout<<ch<<" ";
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

//PATTERN 16

#include<iostream>               //A 
using namespace std;             //B C
int main(){                      //D E F
 int n;                          //G H I J
 cin>>n;
 int row=1;
 char ch='A';
 while(row<=n){
  int column=1;
  while(column<=row){
   cout<<ch<<" ";
   ch=ch+1;
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

//PATTERN 17

#include<iostream>          //D
using namespace std;        //C D
int main(){                 //B C D
 int n;                     //A B C D
 cin>>n;
 int row=1;
 while(row<=n){
  int column=1;
  char ch=('A'+n-row);
  while(column<=row){
   cout<<ch<<" ";
   ch=ch+1;
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}
*/
