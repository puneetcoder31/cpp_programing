#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of digit in the array=";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i] ;}
        int minm=arr[0];
        //cout<<"first min values is"<<minm<<endl; // just to learn logic
    for(int j=1;j<n;j++){
       if(arr[j]<minm){
        minm=arr[j];}}
        //cout<<"now min value is\n"<<minm<<endl;}}   // just to learn logic
    cout<<"minimun digit present in array is = "<<minm;}