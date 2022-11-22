#include <iostream>

class Package
{
private:
    int value;
public:
    /**
     * This is the constructor that initialize the value = 7 and print it out
     */
    Package()
    {
      value = 7;
      std::cout << value << std::endl;
    }

    /**
     * This constructor accepts a parameter and assign it to the value variable and print it out
     * @param v
     */
    Package(int v)
    {
      value = v; std::cout << value << std::endl;
    }

    /**
     * This is a destructor
     */
    ~Package()
    {
      std::cout << value << std::endl;
    }
};

int main()
{
  Package obj1(4);
  Package obj2;
  Package obj3(2);
  return 0;
}
