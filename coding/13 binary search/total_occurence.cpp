#include<iostream>
using namespace std;
int first_occurence(int arr[],int n,int key);
int last_occurence(int arr[],int n,int key);
int main()
{
 int arr[8]={22,33,44,44,44,44,44,89};
 int f=first_occurence(arr,8,44);
 int l = last_occurence(arr, 8, 44);
 int t=(l-f)+1;
 cout<<"the total occurence is "<<t<<"\n";
}
int first_occurence(int arr[], int n, int key){
 int first=0;
 int last=n-1;
 int min=first+(last-first)/2;
 int ans=-1;
 while(first<=last){
  if(arr[min]==key){
   ans=min;
   last=min-1;
  }
  else if(key<arr[min]){
   last=min-1;
  }
  else if(key>arr[min])
  {
   first = min + 1;
  }
  min=first+(last-first)/2;
 }
 return ans;
}
int last_occurence(int arr[], int n, int key)
{
 int first = 0;
 int last = n - 1;
 int min = first + (last - first) / 2;
 int ans = -1;
 while (first <= last)
 {
  if (key == arr[min])
  {
   ans = min;
   first = min + 1;
  }
  else if (key < arr[min])
  {
   last = min - 1;
  }
  else if(key>arr[min])
  {
   first = min + 1;
  }
  min = first + (last - first) / 2;
 }
 return ans;
}
