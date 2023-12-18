#include<iostream>
using namespace std;
void sum(int arr[],int n){
int summ=0;
for(int i =0;i<n;i++){
 summ=arr[i]+summ;
}
cout<<summ<<"\n";
}
int main(){
 int arr[5]={10,23,25,55,66};
 sum(arr,5);
}