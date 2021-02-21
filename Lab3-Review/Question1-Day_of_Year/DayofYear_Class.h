//
// Created by NightOwl on 2/20/21.
//
#include <iostream>
#include <string>
#include <vector>
#ifndef QUESTION1_DAY_OF_YEAR_DAYOFYEAR_H
#define QUESTION1_DAY_OF_YEAR_DAYOFYEAR_H

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
    void conversion(int dayOfYear);
    std::string to_string();
    void setDateInTheMonth(int date_inside_month);
};

#endif //QUESTION1_DAY_OF_YEAR_DAYOFYEAR_H
