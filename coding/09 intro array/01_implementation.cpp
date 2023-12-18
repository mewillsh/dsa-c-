#include<iostream>
using namespace std;
int main(){
 int number[14];
 cout<<endl<<"the value at index 13 is "<< number[13]<<endl;
 cout<<"the value at index 10 is "<< number[10]<<endl; 
 int second[3]={33,44,55};
 cout<<"the value at second at the index of 2 is "<< second[2]<<endl;
 //if the size of the array which we declared is more then the numbers we declared then the remaining numbers will become zero
 int third[18
 ]={23,54};
 int n=18;
 for(int i=0;i<n;i++){
  cout<< third[i]<<" ";
 }
}