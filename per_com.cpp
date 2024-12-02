#include<iostream>
using namespace std;
int fact(int x){
    int fac=1;
      for(int i =1;i<=x;i++){
         fac=fac*i;}
         return fac;}

int comb(int n,int r)
      { int com=fact(n)/(fact(r)*fact(n-r));
       return com;}

int per (int n,int r)
      { int perm=fact(n)/fact(n-r);
       return perm;}
int main(){char o;
    
    do{
    int n,r;
    cout<<"enter choice "<<endl<<"-->p for permuation\n-->c for combination\n-->e for exit\n";

    cin>>o;
    if(o=='p'|| o=='P'){ 
        cout<<"!!! r should not be greater than n !!!\n";
        cout<<"enter value of n  =";cin>>n;
        cout<<"enter value of r  =";cin>>r;
        cout<<per(n,r)<<"\n";}
    else if(o=='c'|| o=='C'){
        cout<<"!!! r should not be greater than n !!!\n";
        cout<<"enter value of n  =";cin>>n;
        cout<<"enter value of r  =";cin>>r;
        cout<<comb(n,r)<<"\n";}
    
    else if (o!='e') { cout<<"\nwrong choice!!\n";}
    
    }while (o!='e');
    cout<<"thank you for using this";
    return 0;
    }

