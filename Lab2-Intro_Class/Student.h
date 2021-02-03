//Hengyi Li
//This is a RecordManagement Program
//This Program Created by Hengyi Li on 8:15 PM, Jan 27, 2021
//This Program has been modify by Hengyi Li on 10:42 AM, Jan 21, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iostream>
#include <string>
#include <vector>
#ifndef LAB2_INTRO_CLASS_STUDENT_H
#define LAB2_INTRO_CLASS_STUDENT_H

class Student
{
private:
    unsigned id;
    std::string name;
    std::string file;
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
     * @param id_param is a unsigned number that receive the user input.
     */
    void setID(unsigned id_param)
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
    unsigned getID() const
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

    std::string set_record_from_file(std::string file_origional)
    {
      file = file_origional;
      return file;
    }

    std::string get_

};
#endif //LAB2_INTRO_CLASS_STUDENT_H
