#include <iostream>
class Yard
{
private:
    int length;
    int width;
public:

    /**
     * This constructor initialize the length and width variable to 0
     */
    Yard()
    {
      length = 0;
      width = 0;
    }

    /**
     * This function accepts a parameter and assign it to the length variable
     * @param len is the variable that being assign to the length variable
     */
    void setLength(int len)
    {
         length = len;
    }

    /**
     * This function accepts a parameter and assign it to the width variable
     * @param wid is the parameter that assign to the width variable
     */
    void setWidth(int wid)
    {
      width = wid;
    }
};

int main()
{
  const unsigned ARRAY_SIZE = 5;
  Yard yardObjects[ARRAY_SIZE];
  int length;
  int width;
  for(unsigned loop = 0; loop < ARRAY_SIZE; loop++)
  {
    std::cout << "Please input the length: ";
    std::cin >> length;
    std::cout << "Please input the width: ";
    std::cin >> width;
    yardObjects->setWidth(width);
    yardObjects->setLength(length);
  }
  std::cout << "Program complete!" << std::endl;
  return 0;
}