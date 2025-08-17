#include<iostream>
using namespace std; 

int main()
{ int SparseMatrix[5][5] = { {0,0,3,5,0}, {0,4,0,6,0}, {3,0,0,7,0},{0,6,9,0,0}, {2,0,3,0,0} };
 int count=0; 
cout<<"THE SPARSE MATRIX "<<endl;
for (int i=0; i<5;i++){
    for (int j=0;j<5;j++){
           cout<<SparseMatrix[i][j]<<" ";
                     if (SparseMatrix[i][j] != 0){   count ++;  } 
}
 cout<< endl;}
int compactMatrix [3][count]; 
int ind=0;
 for (int i=0; i < 5; i++) { 
      for (int j=0;j<5;j++){
                   if(SparseMatrix [i][j]!=0){
                                   compactMatrix[0][ind]=i;
                                   compactMatrix[1][ind]=j;
                                   compactMatrix[2][ind]=SparseMatrix[i][j];
                                    ind++;
             
                  }
       }
}
cout<<endl;

for (int i=0; i< 3; i++){
for (int j=0; j< ind; j++) {
     if (i==0 &&j==0) { cout<<"ROW ---> "; } 
     if (i==1 && j==0) { cout<<"COL --->"; } 
     if (i==2 &&j==0) { cout<<"VALUE --> "; } 
     cout<<compactMatrix[i][j]<<" "; } 
     cout<<endl;}
return 0;}
