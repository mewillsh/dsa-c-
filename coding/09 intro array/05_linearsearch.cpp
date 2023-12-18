#include<iostream>
using namespace std;
//key means which we want to search
bool check(int arr[],int size,int key){
 for(int i=0;i<size;i++){
  if(arr[i]==key)
  return 1;
 }
 return 0;
}
int main(){
 int arr[10]={2,44,-1,22,53,553,76,8,90,100};
 cout<<"Enter the element you want to search"<<"\n";
 int key;
 cin>>key;
 int i;
 bool found=check(arr,10,key);
 if(found){
  cout<<"key is available"<<"\n";
 }
 else{
  cout<<"key is not available"<<"\n";
 }
}
