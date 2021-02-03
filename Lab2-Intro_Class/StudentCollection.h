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
    /**
     * This function is to load all the records from the file.
     */
    void load_all_records();

    /**
     * This function will input values for a new movie record
     */
    void add_new_record();

    /**
     * This function is used to find the record of student based on the id number
     * @param search_id is the integer value that used to search student by their id number
     * @return the search result
     */
    unsigned find_student_record(int search_id);

    /**
     * This function is to delete the student id record that has a delete_id in the record
     * @param delete_id is the id that being flag to be deleted
     */
    void delete_record(int delete_id);

    /**
     * This function is to view all the student records.
     */
    void view_all_records();

    /**
     * This function is to save all the record in the vector to a file
     */
    void save_all_records();
};
#endif //LAB2_INTRO_CLASS_STUDENTCOLLECTION_H
