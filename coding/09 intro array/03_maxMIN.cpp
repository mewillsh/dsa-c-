/*#include<iostream>
using namespace std;
int main(){
 int size ;
 cin>>size;
 int num[size];
 return 0;
}
//this is bad practice never use variable for the size of array

#include<iostream>
#include<limits.h>
using namespace std;
int getmin(int num[],int n){
 int min = INT_MAX;
 for(int i=0;i<n;i++){
  if(num[i]<min){
   min=num[i];
  }
 }
 return min;
}
int getmax(int num[],int n){
 int max=INT_MIN;
 for(int i=0;i<n;i++){
  if(num[i]> max){
   max=num[i];
  }
 }
 return max;
}
int main(){
 int size;
 cin>>size;
 int num[100];
 for(int i=0 ;i<size;i++){
  cin>>num[i];
 }
 cout << "max value is " << getmax(num, size)<<"\n";
  cout << "min value is" << getmin(num, size);
   return 0;
}
*/
#include<iostream>
#include<limits.h>
using namespace std;
int getmax(int num[],int n){
 int maxi=INT_MIN;
 for(int i=0;i<n;i++){
  maxi=max(maxi,num[i]);
 }
 return maxi;
}
int getmin(int num[],int n){
 int mini=INT_MAX;
 for(int i=0;i<n;i++){
  mini=min(mini,num[i]);
 }
 return mini;
}
int main(){
 int size;
 cin>>size;
 int num[100];
 for(int i=0;i<size;i++){
  cin>>num[i];
 }
 cout<<"THE MINIMUM VALUE IS "<<getmin(num,size)<<"\n";
 cout<<"THE MAXIMUM VALUE IS "<<getmax(num,size);
 return 0;
}