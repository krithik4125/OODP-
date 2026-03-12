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
derived(string n,string r,int m):Student(n,r){
    marks=m;

}
void display(){
    Student::display();
    cout<<"Marks: "<<marks<<endl;
}
};
int main(){
    derived d("Krithik","67",85);
    d.display();
    return 0;
}