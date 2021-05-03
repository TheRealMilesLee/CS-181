#include <iostream>

using namespace std;

template <class T>
T mutiplcation(T num1, T num2)
{
  T result = num1 * num2;
  return result;
}

int main()
{
  double num1;
  double num2;
  cout << mutiplcation( num1,  num2) ;
  return 0;
}