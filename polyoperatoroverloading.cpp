#include<iostream>
using namespace std;
class OPoverload
{
    private:
      int num;
    public:
      OPoverload(int n)
      {
        num = n;
      }
      OPoverload operator++()
      {
        num = num + 1;
      }
      void display()
      {
        cout<<"The count is: "<<num<<endl;
      }
};
int main()
{
    OPoverload o(10);
    o.display();
    ++o;o.display();
    return 0;
}