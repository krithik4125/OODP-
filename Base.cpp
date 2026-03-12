#include<iostream>
using namespace std;
class Base{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
    public:
   void init(){
    a=10;
   }
};
class Derived:private Base{
    private:
    int d;
    public:
    void init_Derived(){x
        init();
        b=20;
        d=30;
    }
    void display(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout <<"d="<<d<<endl;
    }
};
int main(){
    Derived obj;
    obj.init_Derived();
    obj.display();
    return 0;
}
