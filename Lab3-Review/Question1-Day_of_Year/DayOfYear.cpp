#include <iostream>
#include <vector>

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
  std::vector<DayofYear_Class> critical_day;
  if(day_of_year >= 1 && day_of_year < 32)
  {
    setMonth("Janurary");
    setDateInTheMonth(day_of_year);
  }
  else if(day_of_year >= 32 && day_of_year < 60)
  {
    setMonth("Feburary");
    setDateInTheMonth(day_of_year - 31);
  }
  else if(day_of_year >= 60 && day_of_year < 91)
  {
    setMonth("March");
    setDateInTheMonth(day_of_year - 59);
  }
  else if(day_of_year >= 91 && day_of_year < 121)
  {
    setMonth("April");
    setDateInTheMonth(day_of_year - 90);
  }
  else if(day_of_year >= 121 && day_of_year < 152)
  {
    setMonth("May");
    setDateInTheMonth(day_of_year - 120);
  }
  else if(day_of_year >= 152 && day_of_year < 182)
  {
    setMonth("June");
    setDateInTheMonth(day_of_year - 151);
  }
  else if(day_of_year >= 182 && day_of_year < 213)
  {
    setMonth("July");
    setDateInTheMonth(day_of_year - 181);
  }
  else if(day_of_year >= 213 && day_of_year < 244)
  {
    setMonth("August");
    setDateInTheMonth(day_of_year - 212);
  }
  else if(day_of_year >= 244 && day_of_year < 273)
  {
    setMonth("September");
    setDateInTheMonth(day_of_year - 243);
  }
  else if(day_of_year >= 273 && day_of_year < 304)
  {
    setMonth("October");
    setDateInTheMonth(day_of_year - 272);
  }
  else if(day_of_year >= 304 && day_of_year < 334)
  {
    setMonth("November");
    setDateInTheMonth(day_of_year - 303);
  }
  else
  {
    setMonth("December");
    setDateInTheMonth(day_of_year - 334);
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
  const unsigned DEFAULTDAY = 0;

  std::cout << "Please input the day of the year: " << std::endl;
  std::cin >> day_of_year;
  DayofYear_Class DayofYearObject(day_of_year);
  std::cout << "Now processing the conversion..." << std::endl;

  std::cout << "The conversion will be: " << DayofYearObject.to_string();

  return 0;
}


