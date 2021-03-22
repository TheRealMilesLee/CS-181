//Hengyi Li
//This is a Prue Abstract Base Class Program
//This Program Created by Hengyi Li on 10:15 PM, March 20, 2021
//This Program has been done by Hengyi Li on 4:54 PM, March 21, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iostream>

class BasicShape
{
private:
    double area;
public:
    /**
     * This function is to set the area of the shape
     * @param Area_Shape is a double number that assign to the area variable
     */
    void setArea(double Area_Shape) {area = Area_Shape;};

    /**
     * This function is to get the area of the shape
     * @return a double value of the area
     */
    double getArea() const{return area;};

    /**
     * This is a virtual function that calculates the area
     */
    virtual void calcArea()  = 0;

    /**
     * This is a display function that used to display everything
     */
    virtual void display() = 0;
};

class Circle : public BasicShape
{
private:
    long int centerX;
    long int centerY;
    double radius;
public:
    /**
     * This is a constructor that used to as a set method.
     * @param XCenter is a long int value that assigned to the centerX variable
     * @param YCenter is a long int value that assigned to the centerY variable
     * @param radius_Cir is a double value that assigned to the radius variable
     */
    Circle(long int XCenter, long int YCenter, double radius_Cir){centerX = XCenter; centerY = YCenter; radius = radius_Cir;};

    /**
     * This function is to get the coordinates of the X axis value of the circle
     * @return a long int value that represents the X axis value of the circle.
     */
    long int getCenterX() const {return centerX;};

    /**
     * This function is to get the coordinates of the Y axis value of the circle
     * @return a long int value that represents the Y axis value of the circle.
     */
    long int getCenterY() const {return centerY;};

    /**
     * This function is to calculate the area of the circle
     */
    void calcArea() override {double area = 3.14159 * radius * radius; setArea(area);};

    /**
     * This function is to display everything
     */
    void display() override
    {
      std::cout << "The Area around the circle that has center point(" << getCenterX()
                << "," << getCenterY() << ") is " << getArea()
                << std::endl;
    }
};

class Rectangle: public BasicShape
{
private:
    long int width;
    long int length;
public:
    /**
     * This is a constructor that work as a set method
     * @param width_Rec is the long int value that assigned to the width variable
     * @param length_Rec is the long int value that assigned to the length variable
     */
    Rectangle(long int width_Rec, long int length_Rec){width = width_Rec; length = length_Rec;};

    /**
     * This function is to get width of the Rectangle
     * @return the width of the Rectangle
     */
    long int getWidth() const{return width;};

    /**
     * This function is to get the length of the Rectangle
     * @return the length of the Rectangle
     */
    long int getLength() const{return length;};

    /**
     * This function is to calculate the area of the Rectangle
     */
    void calcArea() override{double area = length * width; setArea(area);};

    /**
     * This function is to display everything
     */
    void display() override
    {
      std::cout << "The area around the rectangle that has the width of " << getWidth() << " , and has the length of "
                << getLength() << " is "  << getArea()
                << std::endl;
    }
};

int main()
{
  BasicShape *shape = new Circle(2, 2, 2.0);
  shape->calcArea();
  shape->display();
  BasicShape *RecShape = new Rectangle(13, 16);
  RecShape->calcArea();
  RecShape->display();
  
  return 0;
}
