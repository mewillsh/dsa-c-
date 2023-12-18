#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key);
int main(){
 int arr[5]={23,45,66,77,89};
 int value= binary_search(arr,5,77);
 cout<<"the index value of 77 is "<<value<<"\n";
}
int binary_search(int arr[],int n,int key){
 int start=0;
 int end=n-1;
 int min=start+(end-start)/2;
 while(start<=end){
 if(key==arr[min]){
  return min;
 }
 if(key>arr[min]){
  start=min+1;
 }
 else{
  end=min-1;
 }
 min=start+(end-start)/2;
}
return -1;
}