#include <iostream>
#include <string>

using namespace std;

template <class T>
class Storage
{
private:
  T *array;
  int size;
public:
  Storage(int length);
  Storage(const Storage &elem);
  ~Storage();
  int getSize()const
  {return size;}
  T &operator[](const int &index);
  template<class CT>
  friend std::ostream &operator<<(std::ostream &stream_insertion,  Storage<CT> &obj);
};
template<class CT>
std::ostream &operator<<(std::ostream &stream_insertion,  Storage<CT> &obj)
{
  for (size_t i = 0; i < obj.size; i++)
  {
     stream_insertion << obj[i];
    if (i == obj.size - 1)
    {
      continue;
    }
    stream_insertion << ", ";
  }
  return stream_insertion;
}
template<class T>
Storage<T>::Storage(int length)
{
  size = length;
}
template <class T>
T &Storage<T>::operator[](const int &index)
{
  return array[index];
}
template <class T>
Storage<T>::Storage(const Storage &elem)
{
  cout << "Copy constructor is called!";
  size = elem.size;
  // allocate memory
  array = new T [size];
  for(int count = 0; count < size; count++)
  {
    *array[count] = *elem.array[count];
  }
  
  for (int i = 0; i < size; i++)
  {
    cout << elem[i] << endl;
  }
}

template<class T>
Storage<T>::~Storage()
{
  // release all the allocated memory
  delete[] array;
  std::cout << "Deleting all the array elements ..." << std::endl;
}

int main()
{
  Storage<int> obj1(4);
  obj1[0] =1;
  obj1[1] =2;
  obj1[2] =3;
  obj1[3] =4;
  cout << obj1 << endl;
/*
  Storage<int> *obj2;
  obj2 = new Storage<int>(4);
  obj1 = obj2; 
*/
  return 0;
}