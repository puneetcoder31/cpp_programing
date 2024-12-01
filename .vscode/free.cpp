#include<iostream>
using namespace std;
int main()
{
    int x,y;
    
    cout<<"enter the selling price of the item =";
    cin>>x;
    cout<<"enter the cost price of the item =";
    cin>>y;

    if (x>y){
        cout<<"you are in  profit of  ";
        cout<<x-y;}
    if (x<y){
        cout<<"you are in loss of ";
        cout<<y-x;}
    else 
    cout<<"you neither in profit nor loss";
}