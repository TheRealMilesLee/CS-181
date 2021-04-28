//Hengyi Li
//This is a Word frequency Program
//This Program Created by Hengyi Li on 4:35 PM, April 25, 2021
//This Program has been done by Hengyi Li on 7:18 PM, April 25, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>

int main()
{
  //Open the file to read
  std::ifstream infile;
  infile.open("../words.txt");
  
  //Create a temp variable to storing the documents temporarily
  std::string Temp;
  
  //Created a map that using word as its key and the number it appear as the value
  std::map<std::string, int> wordCount;
  
  //Reading stuff from the file;
  while (infile >> Temp;)
  {
    //convert everything to lowercase
    transform(Temp.begin(), Temp.end(), Temp.begin(), ::tolower);
    //Use [] access the map. Inside the [] is the key
    // if the map is empty it will create a new pair of the key, value.
    // Use ++ to initialize the value that corresponds to the key. And when two key are the same, the value will increment too
    ++wordCount[Temp];
  }

  //using foreach loop to output everything
  for (const auto& element: wordCount)
  {
    std::cout << element.first << " " << element.second << std::endl;
  }
  
  return 0;
}
