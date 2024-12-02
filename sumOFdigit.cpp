#include<iostream>
using namespace std;
int main(){
    int num,num1,x;
    cout<<"enter number=";
    cin>>num;
    num1=num;
    int sum=0;
    while(num!=0){
      x=num%10;
      sum=sum+x;
      num=num/10;}
cout<<"sum of digit in "<<num1<<" is "<<sum ;
}