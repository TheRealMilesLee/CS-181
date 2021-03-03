#include <iostream>

using namespace std;

class Tank
{
private:
    int gallons;
public:
    Tank()
    {
      gallons = 50;
    }
    Tank(int gal)
    {
      gallons = gal;
    }
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
    cout << storage[loop].getGallons() << endl;
  }
  return 0;
}

