#include <iostream>
using namespace std;

int dtb(int deci){  // Function to convert decimal to binary
    int binnum =0;
    int pow=1;
       while(deci>0 ){
        int rem =deci%2;
        deci=deci/2;
        binnum+=rem*pow;
        pow*=10; }
        return binnum;}
        
        
    int btd(int binn){ // Function to convert binary to decimal
    int decnum =0;
    int pow=1; 
       while(binn>0 ){
        int rem =binn%10;
        binn=binn/10;
        decnum+=rem*pow;
        pow*=2; }
        return decnum;}


int  main(){
   int choice;
   cout<<"choose 1 for decimal to binary conversion\n";
   cout<<"choose 2 for binary to decimal conversion\n";
   cout<<"Enter your choice:";
   cin>>choice;

   if (choice==1){
      int dec;
      cout<<"Enter the decimal number to convert to binary:\n";
      cin>>dec;
      
      cout<<dtb(dec);}
   else if (choice==2){
         int bin;
         cout<<"Enter the binary number to convert to decimal:";
         cin>>bin;

         cout<<btd(bin);}
      else { cout<<"invalid choice";}
      return 0;}