#include <iostream>

template <class T>
class Storage
{
private:
    T *array;
    int size;
public:
    Storage(int length){size = 0; array = 0;}
    Storage(const Storage &elem);
    ~Storage();
    int array_size() const{return size;}
    int operator[](int index);
    void display() const;
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
  DT maxValue;
  for(size_t looptimes = 0; looptimes < elem.size(); looptimes++)
  {
    if (elem.at(looptimes) < elem.at(looptimes++))
    {
      maxValue = elem.at(looptimes++);
    }
  }
  return maxValue;
}

template<class ET>
ET searchElement(ET searchVal, Storage<ET> elem)
{
  size_t first = 0;
  size_t last = elem.size() - 1;
  size_t size = elem.size();
  size_t position = size;
  bool found = false;

  while(!found && first < last && last < elem.size())
  {
    size_t middle = (first + last) / 2;
    if(elem.at(middle) == searchVal)
    {
      return true;
    }
    else if(elem.at(middle) > searchVal)
    {
      last = middle - 1;
    }
    else
    {
      first = middle + 1;
    }
  }
  return false;
}

template<class T>
Storage<T>::Storage(const Storage &elem)
{
  size = elem.array_size();
  // allocate memory
  array = new T [size];
  // copy individual elements from the array
  for(size_t loop = 0; loop < size; loop++)
  {
    *(array + loop) = *(elem.array + loop);
  }
}

template<class T>
Storage<T>::~Storage()
{
  // release all the allocated memory
  delete[] array;
  std::cout << std::endl << "Deleting all the array elements ..." << std::endl;
}

template<class T>
void Storage<T>::display() const
{
  std::cout << std::endl;
  // manually displaying things
  for (int loop = 0; loop <= size; loop++)
  {
    std::cout << array[loop] << ", ";
  }
}

template<class T>
int Storage<T>::operator[](int index)
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
