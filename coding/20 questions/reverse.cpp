#include<iostream>
#include<vector>
using namespace std;
vector<int>reverse(vector<int>v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]); //remember this
        s++;
        e--;
    }
    return v;
}
void print(vector<int>v){
    cout<<"the reverse array is ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"/n";
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(34);
    v.push_back(19);
    v.push_back(94);
    v.push_back(53);
    vector<int> ans=reverse(v);
    print(ans);
}