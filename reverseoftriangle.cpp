#include<iostream>
using namespace std;
int main(){ int a;
    cout<<("enter the number of rows you want=");
    cin>>a;
    for(int x=0;x<=a;x++){
        for(int b=a;b>x;b-- ){
        cout<<(" * ");}
        cout<<endl; }}