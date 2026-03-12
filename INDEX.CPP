#include<iostream>
using namespace std;
namespace first{
	int var= 20;
}
int main()
{
	using namespace first;
	int var=10;
    cout<<var;
	return 0;
}