/*
#include<iostream>               *
using namespace std;           * *
int main(){                  * * *
 int n;                    * * * *
 cin>>n;
 int row=1;
 while(row<=n){
  //writing code for space
  int space=n-row;
  while(space){
   cout<<" ";
   space=space-1;
  }
  //writing code for stars
  int column=1;
  while(column<=row){
   cout<<"*";
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

//parrern 2

#include<iostream>           * * * *
using namespace std;         * * *
int main(){                  * *
 int n;                      *
 cin>>n;
 int row=1;
 while(row<=n){
  int star=(n-row+1);
  while(star){
   cout<<"*";
   star=star-1;
  }
  row=row+1;
  cout<<endl;
 }
 }
 
//pattern 3

#include<iostream>                ****
using namespace std;               ***
int main(){                         **
 int n;                              *
 cin >> n;
 int row=1;
 while(row<=n){
  ;
  int space=row-1;
  while(space){
   cout<<" ";
   space=space-1;
  }
  int column=(n-row+1)
  ;
  while(column){
   cout<<"*";
   column=column-1;
  }
  row=row+1;
  cout<<endl;
 }
}

//pattern number 4

#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int i=1;
 while(i<=n){
  //writing code for triangle 1 which is space
  int space=n-i;
  while(space){
   cout<<" ";
   space=space-1;
  }
  //writing code for triangle 2 (big numerical triangle)
  int j=1;
  while(j<=i){
   cout<<j;
   j=j+1;
  }
  //writing code for triangle 3( small number triangle)
  int number=i-1;
  while(number){
   cout<<number;
   number=number-1;
  }
  i=i+1;
  cout<<endl;
 }
}
*/
//pattren number 5
//wrong code
#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int i=1;
 while(i<=n){
  int n1=n;
  while(n1){
  cout<<n1;
  n1=n1-1;
  }
 int star=i-1;
 while(star){
  cout<<"*";
  star=star+1;
 }
 cout<<endl;
 i=i+1;
}
}
