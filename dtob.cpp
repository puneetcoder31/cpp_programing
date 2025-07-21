#include <iostream>
using namespace std;
int  main(){
    int num =0;
    int pow=1;
    int deci;
    cin>>deci;
       while(deci>0 ){
        int rem =deci%2;
        deci=deci/2;
        num+=rem*pow;
        pow*=10; }
cout<<"Decimal number to the binary  number is:"<<num;}