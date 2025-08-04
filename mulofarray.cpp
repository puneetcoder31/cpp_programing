#include<iostream>
using namespace std ;
int main (){

  int m ,n ;
  cout<<"enter the number of rows =";
  cin>>m ;
  cout<<"\nenter the number of column =";
  cin>>n;
  
  int arr[m][n];
  int num;
   for ( int i=1;i<=m;i++){
    for (int j=1; j<=n;j++){
      cout<<"enter the number=";
      cin>>num;
      arr[i][j]=num;
      }
   }
     cout<< "enter second matrix details "<<endl;
  int m1 ,n1 ;
  cout<<"enter the number of rows =";
  cin>>m1 ;
  cout<<"\nenter the number of column =";
  cin>>n1;

  
  int arr1[m1][n1];
  int num1;
   for ( int i=1;i<=m;i++){
    for (int j=1; j<=n;j++){
      cout<<"enter the number=";
      cin>>num1;
      arr1[i][j]=num1;
    }
   }


// multiplication of two array....
while(m==n1){
int arr2[m][n1]={};
for (int i =1;i<=m;i++){
  for (int j =1;j<=n1;j++){
    for (int k=1;k<=n;k++){
      arr2[i][j]+=arr[i][k]*arr1[k][j];
    }
  }
}

// to print result 
for ( int i=1;i<=m;i++){
    for (int j=1; j<=n;j++){
      cout<<" | "<<arr[i][j]<< " | ";
    }
    cout<<endl;
  }
cout<<endl<<endl;
for ( int i=1;i<=m1;i++){
    for (int j=1; j<=n1;j++){
      cout<<" | "<<arr1[i][j]<< " | ";
    }
    cout<<endl;}

cout<<endl<<endl;
  
for ( int i=1;i<=m;i++){
    for (int j=1; j<=n1;j++){
      cout<<" | "<<arr2[i][j]<< " | ";
    }
    cout<<endl;
  }
break;}

}
