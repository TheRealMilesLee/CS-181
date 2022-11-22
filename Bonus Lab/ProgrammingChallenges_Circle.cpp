#include <iostream>
//Declear ahead
class Circle;
std::ostream &operator<<(std::ostream &, const Circle &);
class Circle
{
private:
    double radius;
public:
    /**
     * This constructor initialize tha radius variable to 0
     * and accepts a parameter that assign tha value to the radius variable.
     * @param radi is the value that assigned to the radius variable
     */
    Circle(double radi)
    {
      radius = 0;
      radius = radi;
    }

    /**
     * This is a friend function that overload the << operator
     * @return the overload result
     */
    friend std::ostream &operator<<(std::ostream &, const Circle &);

    /**
     * This function overloaded the double operator
     * @return a double result
     */
    operator double()
    {
      const double PI = 3.1416;
      double result = radius * PI;
      return result;
    }
};
std::ostream &operator<<(std::ostream &stream_insertion, const Circle &obj)
{
  stream_insertion << obj.radius;
  return stream_insertion;
}
int main()
{
  Circle circleObj(10);
  std::cout <<  circleObj << std::endl;
  double area = circleObj;
  std::cout << area << std::endl;
  return 0;
}