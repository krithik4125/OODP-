#include<iostream>
using namespace std;
class Student
{
 private:
      int roll;
      string name;
 public:
      void getdata();
      void display();
};
void Student :: getdata()
{
    cout<<"Enter rollno.,name: ";
    cin>>roll>>name;
}
void Student::display()
{
    cout<<"Roll no.: "+ roll;
    cout<<"Name: "+ name;
}
int main()
{
    Student s1;
    s1.getdata();
    s1.display();
    return 0;
}