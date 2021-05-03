#include <iostream>
using namespace std;

//Base class
class Parent
{
	public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
	public:
	int id_c;
};

int main()
{
  Child obj1;
  obj1.id_c = 7;
  obj1.id_p = 91;
  cout << "Child id is " << obj1.id_c << endl;
  cout << "Parent id is " << obj1.id_p << endl;
  return 0;
}
