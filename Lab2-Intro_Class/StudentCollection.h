//Hengyi Li
//This is a RecordManagement Program
//This Program Created by Hengyi Li on 8:15 PM, Jan 27, 2021
//This Program has been modify by Hengyi Li on 10:42 AM, Jan 21, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iostream>
#include "Student.h"
#include <string>
#include <vector>

#ifndef LAB2_INTRO_CLASS_STUDENTCOLLECTION_H
#define LAB2_INTRO_CLASS_STUDENTCOLLECTION_H

class StudentCollection
{
private:
    std::vector<Student> student_records; // holds all student records
public:
    void load_all_records();
    void add_new_record();
    unsigned find_student_record(int search_id);
    void delete_record(int delete_id);
    void view_all_records();
    void save_all_records();
};
#endif //LAB2_INTRO_CLASS_STUDENTCOLLECTION_H
