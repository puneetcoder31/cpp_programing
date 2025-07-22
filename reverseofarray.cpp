#include<iostream>
using namespace std;
void rev(int arr[],int n){

int start=0;
int end= n-1;
while(start<= end){
    int temp;
   temp = arr[start];
   arr[start]=arr[end];
   arr[end]=temp;
   start++;
   end--;}
cout<<"\n reverse array=";
        for ( int i=0;i<n;i++){
    
            cout<<arr[i]<<',';}
    cout<<endl;}
            
int main () { 
    cout<<"Enter the  size of list=";
    int n; cin>>n;
    int arr [n];
    for ( int i=0;i<n;i++){
        cout<<"Enter number=";

        int num; cin>>num;
        arr[i]=num;}
        cout<<"Your given array= ";
        for ( int i=0;i<n;i++){
    
            cout<<arr[i]<<',';}
    rev(arr,n);
    

return 0;}