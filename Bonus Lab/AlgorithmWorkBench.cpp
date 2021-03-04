#include <iostream>
class Circle
{
private:
    double radius;
public:
    /**
     * This constructor is to initialize the radius to 0
     */
    Circle()
    {
      radius = 0;
    }
    /**
     * This constructor accept a parameter and use it to initialize the radius variable
     * @param assign_value is the parameter that used to initialize the radius variable
     */
    Circle(double assign_value)
    {
      radius = assign_value;
    }

    /**
     * This function is to set the value of radius variable
     * @param rad is the value that set to the radius variable
     */
    void setRadius(double rad){radius = rad;}

    /**
     * This function is to get the radius value
     * @return the value in the radius variable
     */
    double getRadius(){return radius;}

    /**
     * This function is to get the area of a circle
     * @return the area of circle
     */
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
    std::cout << "The Radius is: " << circleObject[loop].getRadius()
         << " And the Area is: " << circleObject[loop].getArea()
         << std::endl;
  }
  return 0;
}