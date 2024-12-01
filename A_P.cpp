 #include<iostream>
    using namespace std;
    int main(){
        int n,a,d; 
        cout<<"enter number of term you want in A.P=";
        cin>>n;
        cout<<"enter first term od your A.P=";
        cin>>a;
        cout<<"enter common difference=";
        cin>>d;
        for(int i=a;i<=n;i+=d)
        {cout<<i<<"\n";}
        return 0;
    }