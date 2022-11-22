//Hengyi Li
//This is a RecordManagement Program
//This Program Created by Hengyi Li on 2:44 PM, Jan 20, 2021
//This Program has been modify by Hengyi Li on 10:42 AM, Jan 21, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#ifndef LAB1_VECTOROFSTRUCT_RECORDMANAGEMENT_H
#define LAB1_VECTOROFSTRUCT_RECORDMANAGEMENT_H
#include <iostream>

using namespace std;

class RecordManagement
{
private:
    unsigned id;  // positive value
    string name;  // name with space allowed

public:

/**
 * This function is to add new record to the library
 * @param newStudent is the variable that use to storage the new record.
 */
    void add_new_record(RecordManagement &newStudent);

/**
 * This function is to creating a single string value out of all the fields of the movie struct
 * @param student_rec is to get the numerical student id number and transfer it to a string
 * @return the string result of a student record.
 */
    string to_string(const RecordManagement &student_rec);

/**
 * This function is to search the student records based on title.
 * @param search_id  is a integral number for searching the id number from a student.
 * @param student_records is a vector that storage the id number of student.
 */
    void find_student_record(unsigned search_id, const vector<RecordManagement> &student_records);

/**
 * This function is to view the student id number that has been documented.
 * @param student_records is the library that storage all the id records.
 */
    void view_all_records(const vector<RecordManagement> &student_records);

/**
 * This function is display the menu and return the selection
 * @return the choice that the user choose.
 */
    string display_menu();


};


#endif //LAB1_VECTOROFSTRUCT_RECORDMANAGEMENT_H
