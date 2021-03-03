#include <iostream>
using namespace std;
class Circle
{
private:
    double radius;
public:
    Circle()
    {
      radius = 0;
    }
    Circle(double assign_value)
    {
      radius = assign_value;
    }
    void setRadius(double rad){radius = rad;}
    double getRadius(){return radius;}
    double getArea();
};
double Circle::getArea()
{
  const double PI = 3.14159;
  double result = PI * radius * radius;
  return result;
}
int main()
{
  const unsigned ARRAY_SIZE = 5;
  Circle circleObject[ARRAY_SIZE]{12, 7, 9, 14, 8};
  for(size_t loop = 0; loop < ARRAY_SIZE; loop++)
  {
    cout << "The Radius is: " << circleObject[loop].getRadius()
         << " And the Area is: " << circleObject[loop].getArea()
         << endl;
  }
  return 0;
}