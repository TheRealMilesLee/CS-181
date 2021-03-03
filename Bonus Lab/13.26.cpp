#include <iostream>
using namespace std;

class Yard
{
private:
    int length;
    int width;
public:
    Yard()
    {
      length = 0;
      width = 0;
    }
    void setLength(int len)
    {
         length = len;
    }
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
    cout << "Please input the length: ";
    cin >> length;
    cout << "Please input the width: ";
    cin >> width;
    yardObjects->setWidth(width);
    yardObjects->setLength(length);
  }
  cout << "Program complete!" << endl;
  return 0;
}