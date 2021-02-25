#include <iostream>
#include <vector>
#include <ctime>

const unsigned TOTAL_MONTH_IN_YEAR = 12;
class DayofYear_Class
{
private:
    int day_of_year;
    std::string month;
    int day_in_the_month;
public:
    DayofYear_Class(int day);
    void conversion();
    std::string to_string();
};

DayofYear_Class::DayofYear_Class(int day)
{
  day_of_year = day;
  conversion();
}

void DayofYear_Class::conversion()
{
  std::vector<int> days_of_month{31, 60, 91, 121, 152, 182, 213, 244, 273, 304, 334, 365};
  std::vector<std::string> NameOfMonth{"January", "February", "March", "April", "May", "June", "July", "August", "September","October", "November", "December"};
  if(day_of_year <= days_of_month.at(0))
  {
    month = NameOfMonth.at(0);
    day_in_the_month = day_of_year;
  }
  else
  {
    int compare_indx_front;
    int compare_indx_back;
    for(size_t looptimes = 0; looptimes < days_of_month.size(); looptimes++)
    {
        compare_indx_front = days_of_month.at(looptimes);
        compare_indx_back = days_of_month.at(looptimes++);
        if(day_of_year > compare_indx_front && day_of_year < compare_indx_back)
        {
          month = NameOfMonth.at(looptimes++);
          day_in_the_month = day_of_year - compare_indx_front;
        }
        else
        {
          std::cout << "Something goes wrong..";
        }
    }
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
  std::cout << "The conversion will be: " << DayofYearObject.to_string();

  return 0;
}


