#include<iostream>
using namespace std;
int sum(int n){
    if (n==1)  return 1 ;
    return (n +  sum(n-1));
    
    }
int main()
   {int x ;
    cout<<"enter value of n=";
    cin>>x;
    cout<<sum(x);

}