#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>

int main()
{
  std::ifstream infile;
  infile.open("../words.txt");
  std::string Temp;
  std::map<std::string, int> wordCount;
  while (!infile.eof())
  {
    infile >> Temp;
    transform(Temp.begin(), Temp.end(), Temp.begin(), ::tolower);
    ++wordCount[Temp];
  }

  for (const auto& element: wordCount)
  {
    std::cout << element.first << " " << element.second << std::endl;
  }
  
  return 0;
}
