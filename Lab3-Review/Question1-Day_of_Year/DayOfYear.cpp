#include <iostream>
#include "DayofYear_Class.h"

int main()
{
  int day_of_year;
  const unsigned DEFAULTDAY = 0;
  DayofYear_Class DayofYearObject(DEFAULTDAY);
  std::cout << "Please input the day of the year: " << std::endl;
  std::cin >> day_of_year;
  DayofYearObject.setDate(day_of_year);

  std::cout << "Now processing the conversion..." << std::endl;
  DayofYearObject.conversion(day_of_year);

  std::cout << "The conversion will be: " << DayofYearObject.to_string();

  return 0;
}


