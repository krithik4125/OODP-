#include<iostream>
using namespace std;
class Bank_account
{
    public:
    string account_no;
    string customer_name;
    double balance;
    void display()
    {
        cout<<"Account no: " + account_no;
        cout<<"\nCustomer name: " + customer_name;
        cout<<"\nBalance: "<<balance;
    }
    
};
int main()
{
    Bank_account b1;
    b1.account_no="2345 2346 2324";
    b1.customer_name="Binu Thomas S";
    b1.balance=100000.01;
    b1.display();
    return 0;
}