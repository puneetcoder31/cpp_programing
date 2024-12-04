#include <iostream>
using namespace std;

int main() {
    string x="puneet sharma";
    //cin>>x;
   getline(cin,x); // we use this to get output of full string becaues cin give only first word as output.
    cout<<x;
    
    return 0;
}