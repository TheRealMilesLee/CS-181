#include <iostream>
#include <array>
using namespace std;
int main()
{
//initialize
array<int, 5> numbers{1, 2, 3, 4, 5};
array<string, 4> names{"Jamie", "Ashley","Doug", "Claire"};

//iterator
array<string, 3>::iterator it;
//Display using iterator
for(auto it = numbers.begin(); it != numbers.end(); it++)
{
  cout << *it << endl;
}
//Display using iterator reverse
for(auto it = numbers.end(); it >= numbers.begin(); it--)
{
  cout << *it << endl;
}
return 0;
}
