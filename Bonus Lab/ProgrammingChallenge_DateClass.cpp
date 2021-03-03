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
    Date()
    {
      month = 1;
      day = 1;
      year = 1990;
    }
    Date(int mon_value, int day_value, int year_value)
    {
      month = mon_value;
      day = day_value;
      year = year_value;
    }
    operator std::string();
    int getMonth(){return month;};
    int getDay(){return day;};
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


