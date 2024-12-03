#include<iostream>
using namespace std;
int pow (int n,int p){
    if (p==0)  
    return 1;
    return (n * pow(n,p-1));}
int main()
   {int x,y ;
    cout<<"enter value of___a^b___\n";
    cout<<"enter value of a=";
    cin>>x;
    cout<<"enter value of b=";
    cin>>y;
    cout<<x<<"^"<<y<<" is "<<"= "<<pow(x,y);

}