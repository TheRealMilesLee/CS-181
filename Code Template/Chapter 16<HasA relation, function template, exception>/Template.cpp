template <class T>
class Rectangle
{ 
   // definitions of the Rectangle class
};

// 注意public的template后面要跟一个<T>, like Rectangle<T>
template <class T>
class Square : public Rectangle<T>
{ 
 // definitions of the Square class
};