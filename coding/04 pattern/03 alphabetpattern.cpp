//A A A A
//B B B B
//C C C C
//D D D D

//pattern 11
/*
#include<iostream>
    using namespace std;
int main(){
 int n;
 cin>>n;
 int row=1;
 while(row<=n){
  int column=1;
  while(column<=n){
   char ch ('A' + row - 1);
   cout<<ch<<" ";
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

//pattern 12
//A B C D
//A B C D
//A B C D
//A B C D
#include<iostream>
    using namespace std;
int main(){
 int n;
 cin>>n;
 int row=1;
 while(row<=n){
  int column=1;
  while(column<=n){
   char ch =('A'+column-1);
   cout<<ch<<" ";
   column=column+1;
  }
  row=row+1;
  cout<<endl;
 }
}

//pattern 13

#include<iostream>        //A B C
using namespace std;      //D E F
int main(){               //G H I
    int n;
    cin>>n;
    int row=1;
    char ch = 'A';
    while(row<=n){
        int column=1;
        while(column<=n){
            cout<<ch;
            ch=ch+1;
            column=column+1;
        }
        row=row+1;
        cout<<endl;
    }
}

//PATTERN 14

#include<iostream>                   //A B C
using namespace std;                 //B C D
int main(){                          //C D E
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        while (column <= n){
            char ch = ('A' + row + column - 2);
            cout<<ch;
            column=column+1;
        }
        row=row+1;
        cout<<endl;
    }
}
*/
//ANOTHER WAY PATTERN NUMBER 14

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        char ch=('A'+row-1);
        while(column<=n){
            cout<<ch<<" ";
            ch=ch+1;
            column=column+1;
        }
        row=row+1;
        cout<<endl;
    }
}