#include<iostream>
using namespace std;
class Salary
{
    public:
    int calculateSalary(int basic)
    {
      return basic;
    }
    int calculateSalary(int basic,int bonus)
    {
      return basic+bonus;
    }
    int calculateSalary(int basic,int bonus,int overtime)
    {
      return basic+bonus+overtime;
    }
};
int main()
{
    Salary s;
    cout<<"Salary with basic only: "<<s.calculateSalary(10000)<<endl;
    cout<<"Salary with basic and bonus: "<<s.calculateSalary(10000,5000)<<endl;
    cout<<"Salary with basic, bonus and overtime: "<<s.calculateSalary(10000,5000,1000)<<endl;
    return 0;
}