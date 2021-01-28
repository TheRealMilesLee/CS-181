//
// Created by NightOwl on 1/27/21.
//
#include <iostream>
#include <string>
#ifndef LAB2_INTRO_CLASS_STUDENT_H
#define LAB2_INTRO_CLASS_STUDENT_H

class Student
{
private:
    unsigned id;  // positive value
    std::string name;  // name with space allowed
public:
    void setName(std::string n)
    {
      name = n;
    }

    std::string getName()
    {
      return name;
    }

    void setID(int id_param)
    {
      id = id_param;
    }

    int getID()
    {
      return id;
    }

    // creating a single string value out of
    // all the fields of the student object
    std::string to_string()
    {
      std::string result = std::to_string (id) + " -- " + name;
      return result;
    }

}; // student class ends.


#endif //LAB2_INTRO_CLASS_STUDENT_H
