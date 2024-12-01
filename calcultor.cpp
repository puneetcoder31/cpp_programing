#include<iostream>
using namespace std;
int main()
{   float x;
    float y;
    int a;
    char c;
    cout<<"enter your first number =";
    cin>>x;
    cout<<"enter your sec number=";
    cin>>y;
    do{
    cout<<"1 is for addition \n";
    cout<<"2 is for substraction \n";
    cout<<"3 is for multiply \n";
    cout<<"4 is for division \n";
    cout<<"enter your choice=";
    cin>>a;
    if (a==1){
        cout<<x<<" + "<<y<<" = "<<x+y;}
    else if (a==2){
        cout<<x<<" - "<<y<<" = "<<x-y ;}
    else if (a==3){
        cout<<x<<" * "<<y<<" = "<<x*y ;}
    else if (a==4){
        cout<<x<<" / "<<y<<" = "<<x/y ;}
    else
    cout<<"Not applicable\n";
    cout<<" \nyou want perform more task (y/n)";
    cin>>c;
    }
while(c =='y'|| c =='Y');
return 0;
}