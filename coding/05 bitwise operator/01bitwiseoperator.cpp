#include <iostream>
using namespace std;
int main()
{
 int a = 4;
 int b = 6;
 cout<<"a&b ="<<(a&b)<<"\n";
 cout<<"a|b ="<<(a|b)<<"\n";
 cout<<"~a ="<<(~a)<<"\n";
 cout<<"a^b ="<<(a^b)<<"\n";
// left and right shifting operator
 cout<<(17>>2)<<"\n";
 cout<<(19<<2)<<"\n";
 // bade number ke case me agar left shift maroge to wo negative number bana dega

 // pre-post increment decremant
 int i=7;
 cout<<(i++)<<"\n";
 cout<<(++i)<<"\n";
 cout<<(--i)<<"\n";
 cout<<(i++)<<"\n";
}
