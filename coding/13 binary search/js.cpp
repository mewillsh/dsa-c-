#include <iostream>
using namespace std;
int first_occurence(int arr[], int n, int key);
int last_occurence(int arr[], int n, int key);
int main()
{
 int arr[5] = {20, 45, 45, 50, 90};
 int value = first_occurence(arr, 5, 45);
 int value_2 = last_occurence(arr, 5, 45);
int f=(value_2-value)+1;
cout<<f<<"\n";
}
int first_occurence(int arr[], int n, int key)
{
 int start = 0;
 int end = n - 1;
 int mid = start + (end - start) / 2;
 int ans = -1;
 while (start <= end)
 {
  if (arr[mid] == key)
  {
   ans = mid;
   end = mid - 1;
  }
  else if (arr[mid] > key)
  {
   end = mid - 1;
  }
  else
  {
   start = mid + 1;
  }
  mid = start + (end - start) / 2;
 }
 return ans;
}
int last_occurence(int arr[], int n, int key)
{
 int start = 0;
 int end = n - 1;
 int mid = start + (end - start) / 2;
 int ans = -1;
 while (start <= end)
 {
  if (arr[mid] == key)
  {
   ans = mid;
   start = mid + 1;
  }
  else if (arr[mid] > key)
  {
   end = mid - 1;
  }
  else if (arr[mid] < key)
  {
   start = mid + 1;
  }
  mid = start + (end - start) / 2;
 }
 return ans;
}