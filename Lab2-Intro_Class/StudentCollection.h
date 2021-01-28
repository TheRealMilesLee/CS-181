//
// Created by NightOwl on 1/27/21.
//
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


    // this function will input values for a new movie record
    // and will return that
    void add_new_record();


    // search the student records based on title
    int find_student_record(unsigned search_id);

    // if there is a student with delete_id in the record then that record would be deleted
    // otherwise, nothing happens.
    void delete_record(int delete_id);


    // view all student records
    void view_all_records();

    // save all the record in the vector to a file
    void save_all_records();


}; // studentcollection class ends


#endif //LAB2_INTRO_CLASS_STUDENTCOLLECTION_H
