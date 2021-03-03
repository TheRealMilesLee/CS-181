#include <iostream>

class Circle
{
private:
    double radius;
    const double PI = 3.14159;
public:
    Circle()
    {
      radius = 0.0;
    }
    Circle(double rad)
    {
      radius = rad;
    }
    void setRadius(double rad){radius = rad;};
    double getRadius(){return radius;};
    double getArea();
    double getDiameter();
    double getCircumference();
};

double Circle::getArea()
{
  double Area = PI * radius * radius;
  return Area;
}

double Circle::getDiameter()
{
  double Diameter = radius * 2;
  return Diameter;
}

double Circle::getCircumference()
{
  double Circumference = 2 * PI * radius;
  return Circumference;
}

int main()
{
  double radius;
  Circle circleObject;
  std::cout << "Please enter the radius of the circle: ";
  std::cin >> radius;
  circleObject.setRadius(radius);
  std::cout << "Here is the corresponding area: " << circleObject.getArea()
            << " and diameter: " << circleObject.getDiameter()
            << " and circumference: " << circleObject.getCircumference()
            << std::endl;
}


