#include<iostream>
using namespace std;
class BankAccount
{ 
    private:
      int accountnumber;
      float balance;
    public:
      BankAccount(int a,float b)
      {
        accountnumber = a;
        balance = b;
      }
      void display()
      {
        cout<<"ACCOUNT NUMBER: "<<accountnumber<<endl;
        cout<<"BALANCE: "<<balance;
      }
    };
    int main()
    {
        BankAccount b1(52345234,52.34);
        b1.display();
        return 0;
        
    }

