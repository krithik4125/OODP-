#include<iostream>
using namespace std;
class Employee
{
    private:
    int Employeeid;
    string EmployeeName;
    public:
    void setEmployeeid(int id)
    {
        Employeeid=id;
    }
    void setEmployeeName(string name)
    {
        EmployeeName=name;
    }
    int getEmployeeid()
    {
        return Employeeid;
    }
    string getEmployeeName()
    {
        return EmployeeName;
    }
};
class derived:public Employee
{
    private:
    string Department;
    float salary;
    public:
    void setDepartment(string dept)
    {
        Department=dept;
    }
    string getDepartment()
    {
        return Department;
    }
    void setSalary(float sal)
    {
        salary=sal;
    }
    float getSalary()
    {
        return salary;
    }
};
int main()
{
    derived d;
    d.setEmployeeid(101);
    d.setEmployeeName("Ethan Hunt");
    d.setDepartment("Sales manager");
    d.setSalary(50000.0);
    
    cout<<"Employee ID: "<<d.getEmployeeid()<<endl;
    cout<<"Employee Name: "<<d.getEmployeeName()<<endl;
    cout<<"Department: "<<d.getDepartment()<<endl;
    cout<<"Salary: "<<d.getSalary()<<endl;
    
    return 0;
}