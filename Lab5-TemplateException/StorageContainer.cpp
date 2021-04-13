#include <iostream>
#include <cstdlib>

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
  explicit Storage(int length);
  Storage(const Storage &elem);
  ~Storage();
  //int array_size() const{return size;}
  //T getElementAt(int position);
  T &operator[](const int &index)
  {
    /*
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
     */
    return array[index];
  }
  void display() const;
  std::string to_string() const;
  template<class CT>
  friend std::ostream &operator<<(std::ostream &stream_insertion, const Storage<CT> &obj);
  template<class DT>
  friend DT maximum(Storage<DT> &elem);
  template <class ET>
  friend ET searchElement(ET searchVal, Storage<ET> &elem);
};

template<class PT>
Storage<PT>::Storage(int length)
{
  size = length;
 // std::cout << size;
  /*
  if(size <= 0)
  {
   throw StorageException();
  }
   */
  array = new PT [size];
}
template<class T>
Storage<T>::Storage(const Storage &elem)
{
  size = elem.size;
   /*
  if(size <= 0)
  {
    throw StorageException();
  }
    */
  // allocate memory
  array = new T [size];
  // copy individual elements from the array
  array = elem.array;
  size = elem.size;
}

template<class T>
Storage<T>::~Storage()
{
  // release all the allocated memory
  delete[] array;
  std::cout << std::endl << "Deleting all the array elements ..." << std::endl;
}
template<class CT>
std::ostream &operator<<(std::ostream &stream_insertion, const Storage<CT> &obj)
{                           
  stream_insertion << obj.to_string();
  return stream_insertion;
}
template<class DT>
DT maximum(Storage<DT> &elem)
{
  const unsigned MAX = 1;
  const unsigned MIN = 0;
  unsigned largest = MIN;
  unsigned smallest = MAX;
  DT read;
  for(unsigned looptimes = 0; looptimes < elem.size; looptimes++)
  {
    if(elem.array[looptimes] < smallest)
    {
      smallest = elem.array[looptimes];
    }
    else if(elem.array[looptimes] > largest)
    {
      largest = elem.array[looptimes];
    }
    read = largest;
  }
  return read;
}

template<class ET>
ET searchElement(ET searchVal, Storage<ET> &elem)
{
  if(elem.size == 0)
  {
    throw std::out_of_range("Out of range, it should be bigger than 0");
  }
  for (size_t count = 0; count <= elem.size; count++)
  {
    if (elem.array[count] == searchVal)
    {
      return true;
    }
  }
  return false;
}

template<class T>
void Storage<T>::display() const
{
  std::string Display;
  // manually displaying things
  for (int loop = 0; loop <= size; loop++)
  {
    Display = std::to_string(array[loop]) +  ", ";
  }
  
}

template <class T>
std::string Storage<T>::to_string() const
{
  std::string Display;
  // manually displaying things
  for (int loop = 0; loop <= size; loop++)
  {
    Display = std::to_string(array[loop]) +  ", ";
  }
  return Display;
}

int main()
{
  int size;
    std::cout << "Please input the size of the array: ";
    std::cin >> size;
    /*
    if (size <= 0)
    {
      throw StorageException();
    }
     */
    //Construct two object using the size as parameter to the array size
    Storage<int> myIntStorage(size);
    Storage<double> myDoubleStorage(size);
    
    //fill up the array
    for (int count = 0; count < size; count++)
    {
      myIntStorage[count] = count;
      myDoubleStorage[count] = count * 2.14;
    }
  
    // Display the values in the SimpleVectors.
    std::cout << "Here is the int array elements： " << myIntStorage << std::endl;
    std::cout << "Here is the double elements： " << myDoubleStorage << std::endl;
    
    //Display the max element of the array
    int maxIntElement = maximum(myIntStorage);
    std::cout << "Here is the max int element in the array: " << maxIntElement << std::endl;
    double maxDoubleElement = maximum(myDoubleStorage);
    std::cout << "Here is the max double element in the array: " << maxDoubleElement << std::endl;
    
    //Search elements in the array
    int searchIntValue = 7;
    bool returnFlag_Int = searchElement(searchIntValue, myIntStorage);
    std::cout << "The result of finding is: " << returnFlag_Int;
    double searchDoubleValue = 7.7;
    bool returnFlag_Double = searchElement(searchDoubleValue, myDoubleStorage);
    std::cout << "The result of finding is: " << returnFlag_Double;
  return 0;
}