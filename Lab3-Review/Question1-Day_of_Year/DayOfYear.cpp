#include <iostream>
#include "DayofYear_Class.h"

int main()
{
  int day_of_year;
  const unsigned DEFAULTDAY = 0;

  std::cout << "Please input the day of the year: " << std::endl;
  std::cin >> day_of_year;
  DayofYear_Class DayofYearObject(day_of_year);
  std::cout << "Now processing the conversion..." << std::endl;

  std::cout << "The conversion will be: " << DayofYearObject.to_string();

  return 0;
}


