#include<iostream>
using namespace std;
int main(){
    int num,num1,x;
    cout<<"enter number=";
    cin>>num;
    num1=num;
    int cou=0;
    while(num!=0){
      num=num/10;
      cou++;
    }
    cout<<"number of digit in "<<num1<<" is "<<cou;
}