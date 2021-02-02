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
{ // TODO as soon as the program starts,
  // read the student record entries from the file FILE_NAME and
  // create student objects for each entry
  // add them to the student_records collection
  std::ifstream infile;
  infile.open(FILE_NAME);
  std::string student_file;
  if(!infile.fail())
  {
    Student origional_file;
    while(infile >> origional_file.)
    {

      student_records.push_back(origional_file);
    }

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
  Student new_student;
  // TODO input the values for the student record (id and name)
  std::string student_name;
  std::cout << std::endl << "Student Name: ";
  std::cin >> new_student.setName(student_name);




  std::cout << std::endl << "Student ID: ";
  //cin>> id;

  //cin.ignore(); // ignores the newline character

  std::cout << "Student Name: ";
  //getline(cin, name);

  // Declare a variable of Student object
  Student newStudent;

  // TODO use the public methods to initialize the student object
  // add the object in the student records vector


}


// search the student records based on title
unsigned StudentCollection::find_student_record(unsigned search_id)
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
void StudentCollection::delete_record(unsigned delete_id)
{
  // call the find_student_record(delete_id) and store the returned value
  int position = find_student_record (delete_id);

  // TODO if the return value is a positive value then
  student_records.erase (student_records.begin () + position);

  // TODO if successful then display
   std::cout << std::endl << "the record had been deleted";
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
     std::string records_out;
    for(size_t loop = 0; loop < student_records.size(); loop++)
    {
      output_records.to_string(records_out) = student_records.at(loop);
    }

    std::cout << "The operation is successfully completed!" <<std::endl;
  }
}