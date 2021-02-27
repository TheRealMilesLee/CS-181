//Hengyi Li
//This is a Day-Year Convension Program
//This Program Created by Hengyi Li on 10:15 PM, Feb 25, 2021
//This Program has been modify by Hengyi Li on 12:40 PM, Feb 27, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iostream>
#include <vector>

class DayofYear_Class
{
private:
    int day_of_year;
    std::string month;
    int day_in_the_month;
public:
    /**
     * This is Constructor that accepts a parameter from the user input
     * @param day is the number of day in the year.
     */
    DayofYear_Class(int day);

    /**
     * This function is to do the day in the year-date in the month/day format.
     */
    void conversion();

    /**
     * This functio is just to formatting the output
     * @return a string value that has MONTH, DATE.
     */
    std::string to_string();
};

DayofYear_Class::DayofYear_Class(int day)
{
  day_of_year = day;
  conversion();
}

void DayofYear_Class::conversion()
{
  std::vector<int> days_of_month{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
  std::vector<std::string> NameOfMonth{"January", "February", "March", "April", "May", "June", "July", "August", "September","October", "November", "December"};
  bool done = true;
  unsigned count = 0;
  while (done)
  {
    if(day_of_year <= days_of_month.at(count + 1))
    {
      month = NameOfMonth.at(count);
      day_in_the_month = day_of_year - days_of_month.at(count--);
      done = false;
    }
    count++;
  }
}

std::string DayofYear_Class::to_string()
{
  std::string result = month + " " + std::to_string(day_in_the_month);
  return result;
}

int main()
{
  //Get the user input
  int day_of_year;
  std::cout << "Please input the day of the year: " << std::endl;
  std::cin >> day_of_year;
  DayofYear_Class DayofYearObject(day_of_year);

  //day-date convention happens in here...
  std::cout << "Now processing the conversion..." << std::endl;

  //output everything
  std::cout << "The conversion will be: " << DayofYearObject.to_string();

  return 0;
}


