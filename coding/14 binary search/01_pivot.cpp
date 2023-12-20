#include <iostream>
using namespace std;
int pivot_element(int arr[], int n)
{
 int start = 0;
 int end = n - 1;
 int mid = start + (end - start) / 2;
 while (start < end)
 {
  if (arr[mid] >= arr[0])
  {
   start = mid + 1;
  }
  else
  {
   end = mid;
  }
  mid = start + (end - start) / 2;
 }
 // here we can return both start as well as end we will get the same answer
 return start;
}
int main()
{
 int arr[9] = {10, 20,30,40,1, 2, 3, 4, 5};
 int value = pivot_element(arr, 9);
 cout << "index value of pivot of arr[9] is " << value << "\n";
}