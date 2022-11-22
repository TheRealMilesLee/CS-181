//Hengyi Li
//This is a RecordManagement Program
//This Program Created by Hengyi Li on 2:44 PM, Jan 20, 2021
//This Program has been modify by Hengyi Li on 10:42 AM, Jan 21, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>


using namespace std;


// menu choices
const string EXIT = "4", ADD_NEW = "1", SEARCH = "2", VIEW_ALL = "3";

// student structure
struct Student
{
    unsigned id;  // positive value
    string name;  // name with space allowed
};

/**
 * This function is to add new record to the library
 * @param newStudent is the variable that use to storage the new record.
 */
void add_new_record(Student &newStudent);

/**
 * This function is to creating a single string value out of all the fields of the movie struct
 * @param student_rec is to get the numerical student id number and transfer it to a string
 * @return the string result of a student record.
 */
string to_string(const Student &student_rec);

/**
 * This function is to search the student records based on title.
 * @param search_id  is a integral number for searching the id number from a student.
 * @param student_records is a vector that storage the id number of student.
 */
void find_student_record(unsigned search_id, const vector<Student> &student_records);

/**
 * This function is to view the student id number that has been documented.
 * @param student_records is the library that storage all the id records.
 */
void view_all_records(const vector<Student> &student_records);

/**
 * This function is display the menu and return the selection
 * @return the choice that the user choose.
 */
string display_menu();

int main()
{
  string choice = EXIT;  // gets the choice from the user
  vector<Student> student_records; // holds all student records

  do
  {
    choice = display_menu ();

    if (choice == ADD_NEW) // add new record
    {
      Student new_record;
      add_new_record (new_record);
      student_records.push_back (new_record);
    }
    else if (choice == SEARCH) // search based on title
    {
      int search_id;
      // get the ID to search from the user
      cout << endl << "Search ID: ";
      cin >> search_id;
      cin.ignore (); // consume the new line character
      // call the search function and supply it with the search id
      find_student_record (search_id, student_records);
    }
    else if (choice == VIEW_ALL) // view all records
    {
      // call the function view_all_records to display all student records
      view_all_records (student_records);
    }
  } while (choice != EXIT); // exit condition
  // User friendly ending.
  cout << endl << "Thanks for using the program";

  return 0;
}

void add_new_record(Student &newStudent)
{
  cout << endl << "Student ID: ";
  cin >> newStudent.id;
  cin.ignore (); // ignores the newline character
  cout << "Student Name: ";
  getline (cin, newStudent.name);
}

string to_string(const Student &student_rec)
{
  string result = "00" + to_string (student_rec.id) + "   " + student_rec.name;
  return result;
}

void find_student_record(unsigned search_id, const vector<Student> &student_records)
{
  bool found_flag = false;
  // TODO - SEARCHING the vector
  // loop through all the elements of the student record
  // check whether the ID of the student matches with the search_id
  // if yes, change the found_flag to be true and display the record

  unsigned find_count = 0;
  for(unsigned looptimes = 0; looptimes < student_records.size(); looptimes++)
  {
    if (to_string(search_id) == to_string(student_records.at(find_count).id))
    {
      cout << "The record was found: "  << endl << to_string(student_records.at(find_count));
      found_flag = true;
    }
    else
    {
      cout << endl << "The record was not found: ";
      find_count++;
    }
  }
  cout << endl << "Thanks for using search .." << endl;
}

void view_all_records(const vector<Student> &student_records)
{
  cout << endl << endl << "We have the following student records: ";
  // use a loop and call the to_string method to display the records
  for (unsigned looptimes = 0; looptimes < student_records.size (); looptimes++)
  {
    cout << endl << to_string (student_records[looptimes]);
  }
}

string display_menu()
{
  cout << endl << endl << ADD_NEW + ". Add a new student record" << endl
       << SEARCH + ". Find a record by its ID number" << endl
       << VIEW_ALL + ". View all student records" << endl
       << EXIT + ". Exit the program" << endl
       << "Your choice: ";

  string choice = EXIT; // default choice is exit

  getline (cin, choice); // getting the user's choice

  return choice;
}
