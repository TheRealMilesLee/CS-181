class Point
{ 
private:
    int x, y;
public:
    // constructor, also default constructor
    Point(int px=0, int py =0)
    { x = px; y = py; }
};

// Rectangle class: is comprised of two points
class Rectangle
{
private:
    Point left_top, right_bottom;
public:
    Rectangle()
    { 
          left_top.setXY(0, 0);
          right_bottom.setXY(1024, 768);
      }
};