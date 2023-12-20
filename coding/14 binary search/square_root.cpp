#include <iostream>
using namespace std;
int find_squareroot(int n)
{
 int start = 0;
 int end = n;
 int min = start + (end - start) / 2;
 int ans = -1;
 while (start <= end)
 {
  int square = min * min;
  if (square > n)
  {
   end = min - 1;
  }
  else if (square < n)
  {
   ans = min;
   start = min + 1;
  }
  else if (square == n)
  {
   return min;
  }
  min = start + (end - start) / 2;
 }
 return ans;
}
double decimal(int n, int presition, int temp_solution)
{
 double fraction = 1;
 double ans = temp_solution;
 for (int i = 0; i < presition; i++)
 {
  fraction = fraction / 10;
  for (double j = ans; j * j < n; j = j + fraction)
  {
   ans = j;
  }
 }
 return ans;
}
int main()
{
 int n;
 cout << "type the number you want to find its cube: ";
 cin >> n;
 int temp_solution = find_squareroot(n);
 // yaha maine int ki jagaha par double likha kyu ki int likhane per decimal me output nahi mile ga
 double answer = decimal(n, 3, temp_solution);
 cout << "cube is :" << answer;
}