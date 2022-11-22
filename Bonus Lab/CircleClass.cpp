#include <iostream>

class Circle
{
private:
    double radius;
    const double PI = 3.14159;
public:
    /**
     * This constructor initialize the radius value to 0.0
     */
    Circle()
    {
      radius = 0.0;
    }
    /**
     * This constructor accepts a parameter that assign to the radius variable
     * @param rad is the parameter that assign to the radius variable
     */
    Circle(double rad)
    {
      radius = rad;
    }

    /**
     * This function is to set the radius of a circle
     * @param rad is the radius value that assigned to the raids variable
     */
    void setRadius(double rad){radius = rad;};
    /**
     * This function is to get the radius value from a circle
     * @return is the radius value of circle
     */
    double getRadius(){return radius;};
    /**
     * This function is to get the Area of the circle
     * @return the area of circle
     */
    double getArea();
    /**
     * This function is to get the diameter of the circle
     * @return the diameter of the circle
     */
    double getDiameter();
    /**
     * This function is to get the circumference of the circle
     * @return  the circumference of circle
     */
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


