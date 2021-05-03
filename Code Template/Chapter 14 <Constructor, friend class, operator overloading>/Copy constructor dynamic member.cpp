#include <iostream>

using namespace std;

class SomeClass
{
private:
    int *value;
public:
    SomeClass(int val = 0)
    {
        value = new int;
        *value = val;
    }
    ~SomeClass()
    {
        delete value;
    }
    int getVal()
    { return *value; }
    void setVal(int val)
    { 
      value = &val; 
    }
};

int main()
{

}