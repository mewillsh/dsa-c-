//done alternate swap with and without swap function
#include<iostream>
using namespace std;
void swap_array(int arr[],int n){
   for(int i=0;i<n;i=i+2){
      if(i+1<n){
         //swap(arr[i],arr[i+1]);
         int temp=arr[i+1];
         arr[i+1]=arr[i];
         arr[i]=temp;
      }
   }
   }
void print_arr(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<" ";
}
int main(){
   int arr[8]={43,4,65,22,6,77,21,90};
   swap_array(arr,8);
   print_arr(arr,8);
}