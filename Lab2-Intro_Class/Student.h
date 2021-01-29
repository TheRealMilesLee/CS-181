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
    unsigned id;
    std::string name;  
public:

    /**
     * This function is to set the name that comes from user input.
     * @param names is a string number that receive the name of the student
     */
    void setName(std::string name_of_student)
    {
      name = name_of_student;
    }

    /**
     * This function is to set the number of the id.
     * @param id_param is a int number that receive the user input.
     */
    void setID(int id_param)
    {
      id = id_param;
    }

    /**
     * This function is to get the name that from user input.
     * @return a string value of name.
     */
    std::string getName()
    {
      return name;
    }

    /**
     * This function is to get the id from the user
     * @return a integer number of ID
     */
    int getID() const
    {
      return id;
    }

    /**
     * This function is to creating a single string value
     * @return the value that the function create.
     */
    std::string to_string()
    {
      std::string result = std::to_string (id) + " -- " + name;
      return result;
    }
};
#endif //LAB2_INTRO_CLASS_STUDENT_H
