//
// Created by NightOwl on 2/20/21.
//

#include "DayofYear_Class.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

DayofYear_Class::DayofYear_Class()
{
  
}
DayofYear_Class::DayofYear_Class(int day)
{
  day_of_year = day;
}
void DayofYear_Class::setDate(int number_of_day)
{
  day_of_year = number_of_day;
}
void DayofYear_Class::setMonth(std::string result_month)
{
  month = result_month;
}

void DayofYear_Class::conversion(int dayOfYear)
{
  DayofYear_Class convensionObject;
  if(dayOfYear >= 1 && dayOfYear < 32)
  {
    convensionObject.setMonth("Janurary");
    convensionObject.setDateInTheMonth(dayOfYear);
  }
  else if(dayOfYear >= 32 && dayOfYear < 60)
  {
    convensionObject.setMonth("Feburary");
    convensionObject.setDateInTheMonth(dayOfYear - 31);
  }
  else if(dayOfYear >= 60 && dayOfYear < 91)
  {
    convensionObject.setMonth("March");
    convensionObject.setDateInTheMonth(dayOfYear - 59);
  }
  else if(dayOfYear >= 91 && dayOfYear < 121)
  {
    convensionObject.setMonth("April");
    convensionObject.setDateInTheMonth(dayOfYear - 90);
  }
  else if(dayOfYear >= 121 && dayOfYear < 152)
  {
    convensionObject.setMonth("May");
    convensionObject.setDateInTheMonth(dayOfYear - 120);
  }
  else if(dayOfYear >= 152 && dayOfYear < 182)
  {
    convensionObject.setMonth("June");
    convensionObject.setDateInTheMonth(dayOfYear - 151);
  }
  else if(dayOfYear >= 182 && dayOfYear < 213)
  {
    convensionObject.setMonth("July");
    convensionObject.setDateInTheMonth(dayOfYear - 181);
  }
  else if(dayOfYear >= 213 && dayOfYear < 244)
  {
    convensionObject.setMonth("August");
    convensionObject.setDateInTheMonth(dayOfYear - 212);
  }
  else if(dayOfYear >= 244 && dayOfYear < 273)
  {
    convensionObject.setMonth("September");
    convensionObject.setDateInTheMonth(dayOfYear - 243);
  }
  else if(dayOfYear >= 273 && dayOfYear < 304)
  {
    convensionObject.setMonth("October");
    convensionObject.setDateInTheMonth(dayOfYear - 272);
  }
  else if(dayOfYear >= 304 && dayOfYear < 334)
  {
    convensionObject.setMonth("November");
    convensionObject.setDateInTheMonth(dayOfYear - 303);
  }
  else 
  {
    convensionObject.setMonth("December");
    convensionObject.setDateInTheMonth(dayOfYear - 333);
  }
}

std::string DayofYear_Class::to_string()
{
  DayofYear_Class to_string_object;
  std::string result = to_string_object.month + std::to_string(to_string_object.day_in_the_month);
  return result;
}

void DayofYear_Class::setDateInTheMonth(int date_inside_month)
{
 day_in_the_month = date_inside_month;
}
