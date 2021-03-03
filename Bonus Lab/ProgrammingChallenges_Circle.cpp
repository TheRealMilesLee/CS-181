#include <iostream>

class Circle;

std::ostream &operator<<(std::ostream &, const Circle &);
std::istream &operator>>(std::istream &, Circle &);

class Circle
{
private:
    double radius;
public:
    Circle(double radi)
    {
      radius = 0;
      radius = radi;
    }
    friend std::ostream &operator<<(std::ostream &, const Circle &);
    friend std::istream &operator>>(std::istream &, Circle &);
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
std::istream &operator>>(std::istream &stream_extraction, Circle &obj)
{
  stream_extraction >> obj.radius;
  return stream_extraction;
}
int main()
{
  Circle circleObj(10);
  std::cout <<  circleObj << std::endl;
  double area = circleObj;
  std::cout << area << std::endl;
  return 0;
}