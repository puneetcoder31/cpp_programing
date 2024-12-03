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
int main(){
    int n ;
    cout<<"enter number of row you want=";cin>>n;
    for(int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            cout<< comb(i,j)<<"  ";
        }
        cout<<endl;
    }
}