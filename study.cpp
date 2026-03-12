#include<iostream>
using namespace std;
int main()
{
    int N,i;
    int a=0,b=0,c=0;
    cout<<"Enter N: ";
    cin>>N;
    for(i=1;i<=N;i++)
    {
        int x;
        cout<<"Enter day "<<i<<": ";
        cin>>x;
        if(x>=5)
        {
            cout<<"Excellent"<<endl;
            a++;
        }
        else if(x>=2 && x<=4)
        {
            cout<<"Moderate"<<endl;
            b++;
        }
        else
        {
            cout<<"Poor"<<endl;
            c++;
        }
    }
    cout<<a<<b<<c;
    if(a>N/2)
    {
        cout<<"Strong Foundation\n";
    }
    else
    {
        cout<<"Weak Foundation\n";
    }
}