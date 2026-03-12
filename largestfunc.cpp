#include<iostream>
using namespace std;
void largest()
{
    int a,b;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    if(a>b)
    
        cout<<"The largest number is "<<a;
    
    else
    
        cout<<"The largest number is "<<b;
    
}
int main()
{
    largest();
    return 0;
}