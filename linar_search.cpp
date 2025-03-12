#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number of digit in the array=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;}
    cout<<"enter the number you want to search in the array=";
    int x;
    cin>>x;
    bool test=false;

    for(int j=0;j<n;j++){
        if(arr[j]==x){
            
            test=true;}}
        
        if(test==true)
        {cout<<"number is  present in the array";}
        else
        cout<<"number is not present in the array";
        }
        