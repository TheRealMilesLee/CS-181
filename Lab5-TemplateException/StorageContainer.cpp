#include <iostream>

template<class T>
class Storage
{
private:
    T *array;
    int size{};
public:
    Storage(int length)
    {
      // allocate memory and initialize
      int *newArray[length];
    }
    Storage(const Storage &elem)
    {
      size = elem.array_size();
      // allocate memory
      // copy individual elements from the array
    }
    ~Storage() {
      // release all the allocated memory
      delete[] array;
      std::cout << std::endl <<  "Deleting all the array elements ...";
    }
    // returns the size of the array
    int array_size() const
    {
      return size;
    }
    // 3: overloads the square operator so that the object can be used like an array
    // Review section 16.4 in the C++ Book
     operator[]() // this declaration and definition are incomplete
    {
        // check the index and throw exception if necessary
        if (index >= size)
            // throw exception
        return array[index];
    }

    void display() const // display all the elements of the array
    {
      std::cout << "\n";
      // manually displaying things
      for (int i = 0; i < size; i++)
      {
        std::cout << array[i];
        if (i == size - 1)
        {
          continue;
        }
        std::cout << ", ";
      } }
    // 4: friend function declaration for ostream << operator
    // to display all the elements by using cout
    template <class CT>
    friend std::ostream &operator<<(std::ostream &os, Storage<CT> elem);
    // 5: declare the friend template function maximum in the following
    // friend maximum(elem); // declaration is incomplete
    // 6: declare the friend template function searchElement in the following
    // friend searchElement(searchVal, elem); // declaration is incomplete
};