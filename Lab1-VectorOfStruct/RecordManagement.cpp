//
// Created by NightOwl on 1/20/21.
//
#include <iostream>
#include "RecordManagement.h"

using namespace std;

const string EXIT = "4", ADD_NEW = "1", SEARCH = "2", VIEW_ALL = "3";

void RecordManagement::add_new_record(RecordManagement &newStudent)
{
  cout << endl << "Student ID: ";
  cin >> newStudent.id;
  cin.ignore (); // ignores the newline character
  cout << "Student Name: ";
  getline (cin, newStudent.name);
}

string RecordManagement::to_string(const RecordManagement &student_rec)
{
  string result = "00" + to_string (student_rec.id) + "   " + student_rec.name;
  return result;
}

void RecordManagement::find_student_record(unsigned search_id, const vector<RecordManagement> &student_records)
{
  bool found_flag = false;
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

void RecordManagement::view_all_records(const vector<RecordManagement> &student_records)
{
  cout << endl << endl << "We have the following student records: ";
  // use a loop and call the to_string method to display the records
  for (unsigned looptimes = 0; looptimes < student_records.size (); looptimes++)
  {
    cout << endl << to_string (student_records.at(looptimes));
  }
}

string RecordManagement::display_menu()
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

