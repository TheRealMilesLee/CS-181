#include <iostream>
#include <exception>

class StorageException : public std::runtime_error
{
public:
    StorageException(): std::runtime_error("Out of the boundary"){}
};

template <class T>
class Storage
{
private:
  T *array;
  int size;
public:
  explicit Storage(int length){size = length; array = new T [size];}
  Storage(const Storage &elem);
  ~Storage();
  int array_size() const{return size;}
  T &operator[](int index)
  {
    try
    {
      if (index >= size || index <= 0)
      {
        throw StorageException();
      }
    }catch(const char &error)
    {
      std::cout << "Error: " << error << std::endl;
    }
    return array[index];
  }
  void display() const;
  friend std::ostream &operator<<(std::ostream &os, Storage<T> elem);
  friend T maximum(Storage<T> elem);
  friend T searchElement(T searchVal, Storage<T> elem);
};

template<class T>
Storage<T>::Storage(const Storage &elem)
{
  // allocate memory
  array = new T [size];
  // copy individual elements from the array
  array = elem.array;
  size = elem.array_size();
}

template<class T>
Storage<T>::~Storage()
{
  // release all the allocated memory
  delete[] array;
  std::cout << std::endl << "Deleting all the array elements ..." << std::endl;
}

template<class T>
std::ostream &operator<<(std::ostream &os, Storage<T> elem)
{
  os << elem.display();
  return os;
}
template<class T>
T maximum(Storage<T> elem)
{
  T maxValue;
  for(size_t looptimes = 0; looptimes < elem.size; looptimes++)
  {
    if (elem.at(looptimes) < elem.at(looptimes++))
    {
      maxValue = elem.at(looptimes++);
    }
  }
  return maxValue;
}

template<class T>
T searchElement(T searchVal, Storage<T> elem)
{
  try
  {
    if(elem.size <= 0)
    {
      throw std::out_of_range("Out of range, it should be bigger than 0");
    }
    for(size_t loop = 0; loop < elem.size; loop++)
    {
       if(searchVal == elem[loop])
       {
         return true;
       }
    }
    return false;
  } catch (const char *error)
  {
     std::cout << "Error: " << error << std::endl;
  }
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
int main()
{
  int size;
  try
  {
    std::cout << "Please input the size of the array: ";
    std::cin >> size;
    if (size <= 0)
    {
      throw StorageException();
    }
  } catch (const char *error)
  {
    std::cout << "Error: " << error << std::endl;
  }
  //Construct two object using the size as parameter to the array size
  Storage<int> myIntStorage(size);
  Storage<double> myDoubleStorage(size);
  
  //fill up the array
  for (size_t count = 0; count < size; count++)
  {
    myIntStorage[count] = count;
    myDoubleStorage[count] = (count * 2.14);
  }

  // Display the values in the SimpleVectors.
  std::cout << "Here is the int array elements" << myIntStorage << std::endl;
  std::cout << "Here is the double elements" << myDoubleStorage << std::endl;
  
  //Display the max element of the array
  int maxIntElement = maximum(myIntStorage);
  std::cout << maxIntElement << std::endl;
  double maxDoubleElement = maximum(myDoubleStorage);
  std::cout << maxDoubleElement << std::endl;
  
  //Search elements in the array
  int searchIntValue = 7;
  bool returnFlag_Int = searchElement(searchIntValue, myIntStorage);
  std::cout << "The result of finding is: " << returnFlag_Int;
  double searchDoubleValue = 7.7;
  bool returnFlag_Double = searchElement(searchDoubleValue, myDoubleStorage);
  std::cout << "The result of finding is: " << returnFlag_Double;
  
  return 0;
}