#include<iostream>
using namespace std;
void reverseARR(int arr[],int n){
 int start=0;
 int end=(n-1);
 while(start<=end){
  swap(arr[start],arr[end]);
  start++;
  end--;
 }
}
void printARR(int arr[],int n){
 for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }
 cout<<"\n";
}
int main(){
 int arr[6]={22,33,65,775,44,32};
 int prr[5]={9,12,42,34,78};
 reverseARR(arr,6);
 reverseARR(prr,5);
 printARR(arr,6);
 printARR(prr,5);
}