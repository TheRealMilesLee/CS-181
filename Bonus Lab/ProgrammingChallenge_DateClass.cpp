#include <iostream>
#include <string>
#include <vector>
class Date
{
private:
    int month;
    int day;
    int year;
public:
    /**
     * This constructor initialize the month, day and year value
     */
    Date()
    {
      month = 1;
      day = 1;
      year = 1990;
    }
    /**
     * This constructor accept three parameter and assign to month, day, year variable
     * @param mon_value is the value assigned to month variable
     * @param day_value is the value assigned to day variable
     * @param year_value is the value assigned to year variable
     */
    Date(int mon_value, int day_value, int year_value)
    {
      month = mon_value;
      day = day_value;
      year = year_value;
    }

    /**
     * This is to overload the string operator
     * @return the string overload result
     */
    operator std::string();

    /**
     * This function is to get the value of month
     * @return the month value
     */
    int getMonth(){return month;};

    /**
     * This function is to get the value of day
     * @return the date value
     */
    int getDay(){return day;};

    /**
     * This function is to get the value of year
     * @return the date value
     */
    int getYear(){return year;};
};
Date::operator std::string()
{
  std::string convert_result;
  std::vector<int> number_month{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  std::vector<std::string> string_month{"January", "February", "March", "April", "May", "June", "July", "August", "September","October", "November", "December" };
  for(size_t looptimes = 0; looptimes < number_month.size(); looptimes++)
  {
    if(month == number_month.at(looptimes))
    {
      return  std::to_string(day) + "  " + string_month.at(looptimes) +  "  " + std::to_string(year);
    }
  }
}

int main()
{
  Date my_date(4, 20, 2021);
  std::string date = my_date;
  std::cout << date << std::endl;
  return 0;
}


