#include <iostream>

template <class T>
class Storage
{
private:
    T *array;
    int size;
public:
    // 1: basic constructor
    Storage(int length){size = 0; array = 0;}
    // 2: copy constructor
    Storage(const Storage &elem);
    ~Storage();
    int array_size() const{return size;}
    int operator[](int index)
    {
      try
      {
        if (index >= size)
        {
          throw "Index out of the boundary";
        }
        return array[0];
      }catch(const char &error)
      {
        std::cout << "Error: " << error << std::endl;
      }
    }

    void display() const // display all the elements of the array
    {
      std::cout << std::endl;
      // manually displaying things
      for (int loop = 0; loop <= size; loop++)
      {
        std::cout << array[loop] << ", ";
      }
    }
    // 4: friend function declaration for ostream << operator
    // to display all the elements by using cout
    template <class CT>
    friend std::ostream &operator<<(std::ostream &os, Storage<CT> elem);
    // 5: declare the friend template function maximum in the following
    friend maximum(elem); // declaration is incomplete
    // 6: declare the friend template function searchElement in the following
    friend searchElement(searchVal, elem); // declaration is incomplete
};

template<class CT>
std::ostream &operator<<(std::ostream &os, Storage<CT> elem)
{
  os << elem.display();
  return os;
}
