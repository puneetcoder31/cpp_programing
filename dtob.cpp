#include <iostream>
using namespace std;
/*int  main(){
    int num =0;
    int pow=1;
    int deci;
    cin>>deci;
       while(deci>0 ){
        int rem =deci%2;
        deci=deci/2;
        num+=rem*pow;
        pow*=10; }
cout<<"Decimal number to the binary  number is:"<<num;}*/

int main(){
    int bin;

    cin>>bin;
    int ans=0;
    int pow=1;
    while(bin>0){
        int rem=bin%10;
        bin/=10;
        ans+=rem*pow;
        pow*=2;}
    cout<<"Binary number to the decimal number is:"<<ans;
    return 0;

}