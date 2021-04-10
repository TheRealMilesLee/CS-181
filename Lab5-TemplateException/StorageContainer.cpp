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
    void display() const
    {
      std::cout << std::endl;
      // manually displaying things
      for (int loop = 0; loop <= size; loop++)
      {
        std::cout << array[loop] << ", ";
      }
    }
    template <class CT>
    friend std::ostream &operator<<(std::ostream &os, Storage<CT> elem);
    template<class DT>
    friend DT maximum(Storage<DT> elem);
    template<class ET>
    friend ET searchElement(ET searchVal, Storage<ET> elem);
};

template<class CT>
std::ostream &operator<<(std::ostream &os, Storage<CT> elem)
{
  os << elem.display();
  return os;
}

template<class DT>
DT maximum(Storage<DT> elem)
{
  return nullptr;
}

template<class ET>
ET searchElement(ET searchVal, Storage<ET> elem)
{
  return nullptr;
}
