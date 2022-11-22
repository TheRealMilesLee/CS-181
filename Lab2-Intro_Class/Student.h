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
    void setName(std::string name_of_student);
    void setID(unsigned id_param);
    std::string getName();
    unsigned getID() const;
    std::string to_string();
};
#endif //LAB2_INTRO_CLASS_STUDENT_H
