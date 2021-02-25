#include <iostream>
#include <vector>
#include <ctime>

const unsigned TOTAL_DAY_IN_YEAR = 365;
class DayofYear_Class
{
private:
    int day_of_year;
    std::string month;
    int day_in_the_month;
public:
    DayofYear_Class();
    DayofYear_Class(int day);
    void setMonth(std::string result_month);
    void setDate(int number_of_day);
    int getDate();
    std::string getMonth();
    void conversion();
    std::string to_string();
    void setDateInTheMonth(int date_inside_month);
};

DayofYear_Class::DayofYear_Class(){}
DayofYear_Class::DayofYear_Class(int day)
{
  day_of_year = day;
  conversion();
}
void DayofYear_Class::setDate(int number_of_day)
{
  day_of_year = number_of_day;
}
void DayofYear_Class::setMonth(std::string result_month)
{
  month = result_month;
}
void DayofYear_Class::conversion()
{
  std::vector<DayofYear_Class> days_of_year;
  int initialization_indx = 1;
  for(size_t loop = 0; loop < TOTAL_DAY_IN_YEAR; loop++)
  {
    days_of_year.push_back(initialization_indx);
    initialization_indx++;
  }
  std::vector<std::string> NameOfMonth{"January", "February", "March", "April", "May", "June", "July", "August", "September","October", "November", "December"};
  for(size_t looptimes = 0; looptimes < days_of_year.size(); looptimes++)
  {

     if(day_of_year == )
     {
       month = NameOfMonth.at(looptimes);
       day_in_the_month = ;
     }
  }
}

std::string DayofYear_Class::to_string()
{
  std::string result = month + " " + std::to_string(day_in_the_month);
  return result;
}

void DayofYear_Class::setDateInTheMonth(int date_inside_month)
{
  day_in_the_month = date_inside_month;
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


