//Hengyi Li
//This is a Day-Year Convension Program
//This Program Created by Hengyi Li on 8:15 PM, Feb 26, 2021
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
     * This is a constructor that accepts a parameter from the user input
     */
    DayofYear_Class(int day);

    /**
     * This function is to overload the ++ operator.
     * @return the postfix ++ overload result.
     */
    DayofYear_Class operator++(int)
    {
      day_of_year++;
      DayofYear_Class postfix_plus(day_of_year);
       return postfix_plus;
    }

    /**
     * This function is to overload the -- operator.
     * @return the -- operator result.
     */
    DayofYear_Class operator--(int)
    {
      day_of_year--;
      DayofYear_Class postfix_minus(day_of_year);
      return postfix_minus;
    }

    /**
     * This function is to do the day-date conversion.
     */
    void conversion();

    /**
     * This function is to output everything.
     * @return the format of month-date.
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
  if(day_of_year < 1)
  {
    day_of_year = days_of_month.at(days_of_month.size() - 1);
  }
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

  int day_of_year;
  std::cout << "Please input the day of the year: " << std::endl;
  std::cin >> day_of_year;
  DayofYear_Class DayofYearObject(day_of_year);
  std::cout << "Now processing the conversion..." << std::endl;
  std::cout << "The conversion will be: " << DayofYearObject.to_string() << std::endl;

  //overloading case
  DayofYear_Class date(day_of_year);
  std::cout<< date.to_string() << std::endl;
  DayofYear_Class birthday = date--;
  std::cout<< date.to_string() << std::endl;
  std::cout<< birthday.to_string() << std::endl;
  date++;
  std::cout<< date.to_string() << std::endl;

  return 0;
}


