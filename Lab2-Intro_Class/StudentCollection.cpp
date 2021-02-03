//Hengyi Li
//This is a RecordManagement Program
//This Program Created by Hengyi Li on 8:15 PM, Jan 27, 2021
//This Program has been modify by Hengyi Li on 10:42 AM, Jan 21, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include "StudentCollection.h"
#include <iostream>
#include <fstream>
#include "Student.h"
#include <vector>
#include <string>

const std::string FILE_NAME = "student_record.txt";
const unsigned NOT_FOUND = -1;


void StudentCollection::load_all_records()
{
  std::ifstream infile;
  infile.open(FILE_NAME);
  std::string student_file;
  if(!infile.fail())
  {
    Student origional_file;
    while(infile >> student_file)
    {
      origional_file.set_record_from_file(student_file);
      student_records.push_back(origional_file);
    }
    infile.close();
  }
  else
  {
    std::cout << "File could not found!" << std::endl;
  }
}


// this function will input values for a new movie record
// and will return that
void StudentCollection::add_new_record()
{
  unsigned id;
  std::string name;
  std::cout << std::endl << "Student ID: ";
  std::cin>> id;
  std::cin.ignore(); // ignores the newline character
  std::cout << "Student Name: ";
  std::getline(std::cin, name);

  Student newStudent;
  newStudent.setID(id);
  newStudent.setName(name);
  student_records.push_back(newStudent);
}


// search the student records based on title
unsigned StudentCollection::find_student_record(int search_id)
{
  for (size_t index = 0; index < student_records.size(); index++)
  {
    if (student_records.at(index).getID() == search_id)
    {
      std::cout << std::endl << "The record has been found: ";
      std::cout << student_records.at(index).to_string();
      return index;
    }
  }
  std::cout << std::endl << "The record was not found: ";
  return NOT_FOUND; // a negative value to indicate the record has not been found
}

// if there is a student with delete_id in the record then that record would be deleted
// otherwise, nothing happens.
void StudentCollection::delete_record(int delete_id)
{
  // call the find_student_record(delete_id) and store the returned value
  int position = find_student_record (delete_id);

  // TODO if the return value is a positive value then
  if(position > 0)
  {
    student_records.erase (student_records.begin () + position);
    std::cout << std::endl << "the record had been deleted";
  }

}

// view all student records
void StudentCollection::view_all_records()
{
  Student view_records;
  std::cout << std::endl << std::endl << "We have the following student records: ";
  // use a loop and call the to_string method to display the records
  for (size_t looptimes = 0; looptimes < student_records.size(); looptimes++)
  {
    std::cout << view_records.to_string() << std::endl; // display the student records
  }
}

// save all the record in the vector to a file
void StudentCollection::save_all_records()
{
  Student output_records;
  // TODO when this option is selected,
  // write each student object information in one single line in the file
  std::ofstream output_file;
  output_file.open(FILE_NAME);
  if(!output_file.fail())
  {
    for(size_t loop = 0; loop < student_records.size(); loop++)
    {
      
    }
    std::cout << "The operation is successfully completed!" <<std::endl;
  }
  else
  {
    std::cout << "This file does not exist on the disk!" << std::endl;
  }
}