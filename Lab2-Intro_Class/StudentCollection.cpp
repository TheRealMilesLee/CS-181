//
// Created by NightOwl on 1/27/21.
//

#include "StudentCollection.h"

const std::string FILE_NAME = "student_record.txt";
const int NOT_FOUND = -1;

void StudentCollection::load_all_records()
{ // TODO as soon as the program starts,
  // read the student record entries from the file FILE_NAME and
  // create student objects for each entry
  // add them to the student_records collection
}


// this function will input values for a new movie record
// and will return that
void StudentCollection::add_new_record()
{
  // TODO input the values for the student record (id and name)

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
int StudentCollection::find_student_record(unsigned search_id)
{
  for (size_t index = 0; index < student_records.size (); index++)
  {
    if (student_records[index].getID () == search_id)
    {
      std::cout << std::endl << "The record has been found: ";
      std::cout << student_records[index].to_string ();
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
  student_records.erase (student_records.begin () + position);

  // TODO if successful then display
  // cout<<endl<<"the record had been deleted"
}


// view all student records
void StudentCollection::view_all_records()
{
  std::cout << std::endl << std::endl << "We have the following student records: ";
  // use a loop and call the to_string method to display the records
  for (unsigned i = 0; i < student_records.size (); i++)
  {  // display the student records
  }
}


// save all the record in the vector to a file
void StudentCollection::save_all_records()
{ // TODO when this option is selected,
  // open the FILE_NAME in write mode
  // write each student object information in one single line in the file
  // write a confirmation that the operation was successful
}