#include<iostream>
using namespace std;
class students{
    private:
    int roll;
    string name;
    public:
    void getdata();
    void display();
};
void students::getdata(){
     cout<<"Enter roll number:";
     cout<<"Enter name:";
     cin>>name>>roll;
    }
    void students::display(){
     cout<<"Enter roll number"+roll;
     cout<<"Enter name"+name;
    }
int main(){
    students s1;
    s1.getdata();
    s1.display();
    return 0;
}