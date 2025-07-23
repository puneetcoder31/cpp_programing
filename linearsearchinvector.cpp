#include<iostream>
#include<vector>
using namespace std;
void rev(vector<int> & vec,int n){
int start=0;
int end=n-1;
while(start<= end){
   swap(vec[start],vec[end]);
   start++;
   end--;}}


int main(){
    vector<int>v;
    int s;
    cout<<"Size of the vector you want="; cin>>s;
    for ( int i=0;i<=s-1;i++){
        cout<<"enter the number the you want the vector=";
        int num;
        cin>>num;
        v.push_back(num);}
    cout<<"given vector\n";
    
    for ( int i: v){
        cout<<i<<endl;
  
    }   
      rev(v,s);
      cout<<" reversed vector\n";
      for ( int i: v){
        cout<<i<<endl;}
  

    return 0;
} 