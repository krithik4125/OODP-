#include<iostream>
using namespace std;
class Student{
    public:
    string name;
string rollno;
Student(string n,string r){
    name=n;
    rollno=r;
}
void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
}
};
class derived:public Student{
    public:
    int marks;
    int marks2;
    int marks3;
    int avg;
    int total;
derived(string n,string r,int m,int m2,int m3):Student(n,r){
    marks=m;
    marks2=m2;
    marks3=m3;
}
  void compute(){
    total=marks+marks2+marks3;
    avg=(marks+marks2+marks3)/3;
}
void display(){
    Student::display();
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
}
};
int main(){
    derived d("hunt","67",85,90,75);
    d.compute();
    d.display();
    return 0;
}