#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number of digit in the array=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;}
    int max=arr[0];   // we can use INT_MIN instead of arr[0]
    for(int j=1;j<n;j++){
        if(max<arr[j]){
            max=arr[j];}}
    cout<<"maximum number in array max=" <<max;
}