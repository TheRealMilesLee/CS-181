#include <iostream>
class Tank
{
private:
    int gallons;
public:
    /**
     * This is the constructor that initialize the gallon to the 50
     */
    Tank()
    {
      gallons = 50;
    }
    /**
     * This constructor accept a parameter that assign to the gallon variable
     * @param gal
     */
    Tank(int gal)
    {
      gallons = gal;
    }

    /**
     * This function is used to get the number of gallons
     * @return the number of the gallons
     */
    int getGallons()
    {
      return gallons;
    }
};

int main()
{
  Tank storage[3] = {10, 20};
  for(size_t loop = 0; loop < 3; loop++)
  {
    std::cout << storage[loop].getGallons() << std::endl;
  }
  return 0;
}

