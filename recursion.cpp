/*#include<iostream>
using namespace std;
void print(int n){
    if (n==0)  return;
    cout<<n<<"\n";
    print(n-1);
    }
int main(){int n ;
    cout<<"enter value of n=";
    cin>>n;
    print(n);

}*/

// to print number in ascending order;;

#include<iostream>
using namespace std;
void print(int n){
    if (n==0)  return;
    print(n-1);
    cout<<n<<"\n";
    }
int main()
   {int x ;
    cout<<"enter value of n=";
    cin>>x;
    print(x);

}