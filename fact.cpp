#include<iostream>
using namespace std;
int main()
{   int x;
cout<<"enter the number whose factorial you want=";
cin>>x;
int fac=1;
for(int i =1;i<=x;i++){
    fac=fac*i;}
    cout<<"factorial of "<<x<<" is "<<fac;}