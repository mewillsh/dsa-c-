// row tab tak chale ga jab tak wo N se chhota ya N ke barabar nahi
// nahi ho jata aur column tab tak chale ga jab tak wo row ae choota
// ya phire row ke barabar nahi ho jata tab tak 1+ kar ke chalate jae ga
// APANA COLUMN ROW PE DEPENDENT HAI AUR PATTERN BHI ROW SE START HAI

// pattern 6
/*
#include<iostream>                *
using namespace std;              **
int main(){                       ***
 int n;
 cin>>n;
 int row=1;
 while(row<=n){
  int column=1;
  while(column<=row){
   cout<<"*";
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

//pattern 7

#include<iostream>                 1
using namespace std;               22
int main(){                        333
 int n;
 cin>>n;
 int row=1;
 while(row<=n){
  int column=1;
  while(column<=row){
   cout<<row;
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

//pattern 8

#include<iostream>              1
using namespace std;            2 3
int main(){                     4 5 6
 int n;                         7 8 9 10
 cin>>n;
 int row=1;
 int count=1;
 while(row<=n){
  int column=1;
  while(column<=row){
   cout<< count <<" ";
   count=count+1;
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

//pattern 9

#include<iostream>              1
using namespace std;            2 3
int main(){                     3 4 5
 int n;                         4 5 6 7
 cin>>n;
 int row=1;
 ;
 while(row<=n){
  int count = row;
   int column = 1;
  while(column<=row){
   cout<<count<<" ";
   count=count+1;
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

// another way of doing same pattern

#include <iostream>
using namespace std;
int main()
{
 int n;
 cin >> n;
 int row = 1;
 while (row <= n)
 {
  int column = 1;
  while (column <= row)
  {
   cout << row + column - 1 << " ";
   column = column + 1;
  }
  row = row + 1;
  cout << endl;
 }
}
*/
//pattern 10

#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int row=1;
 while(row<=n){
  int column=1;
  while(column<=row){
   cout<<row + 1 - column<<" ";
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}