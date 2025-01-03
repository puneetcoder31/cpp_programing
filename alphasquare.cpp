#include<iostream>
using namespace std;
int main(){ int a;
    cout<<("enter the number btw 65 and 91 you want=");
    cin>>a;
    int c;
        cout<<("enter the number of row you want=");
        cin>>c;
    for(int x=0;x<=c;x++){
        for(int b=65;b<=a;b++ ){
        cout<<" "<<char(b)<<" ";}
        cout<<endl; }

}