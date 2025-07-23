#include<iostream>
using namespace std;
void subarray(int arr[],int s){
    for(int start=0; start<s;start++){
        for(int end =start;end<s;end++){
            for (int i=start; i<=end;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
    }        
}
int main (){
    int s;
    int arr[10];
    cout<<"Size of the array you want="; cin>>s;
    for ( int i=0;i<s;i++){
        cout<<"enter the number the you want the array=";
        int num;
        cin>> arr[i];}
        subarray(arr,s);
    
     return 0;}
    
