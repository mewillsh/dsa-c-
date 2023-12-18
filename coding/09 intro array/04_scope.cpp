//If we will update the address of array int the function then is will also update
//the main function array
#include<iostream>
using namespace std;
void update(int arr[],int n){
 cout<<"entering in the function"<<"\n";
 arr[0]=120;
 for (int i = 0; i < 3; i++){
  cout << arr[i] << " ";
 }
 cout<<"\n";
 cout << "going back to the main function"<<endl;
}
int main(){
 int arr[3]={2,3,4};
 update(arr,3);
 for(int i=0;i<3;i++){
  cout<<arr[i]<<" ";
 }
 cout<<"\n";
 return 0;
}