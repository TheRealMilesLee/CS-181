//Hengyi Li
//This is a RecordManagement Program
//This Program Created by Hengyi Li on 2:44 PM, Jan 20, 2021
//This Program has been modify by Hengyi Li on 10:42 AM, Jan 21, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.


#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "RecordManagement.h"


using namespace std;


// menu choices
const string EXIT = "4", ADD_NEW = "1", SEARCH = "2", VIEW_ALL = "3";

int main()
{
  string choice = EXIT;  // gets the choice from the user
  vector<RecordManagement> student_records; // holds all student records
  RecordManagement record;
  do
  {
    choice = record.display_menu ();

    if (choice == ADD_NEW) // add new record
    {
      RecordManagement new_record;
      record.add_new_record (new_record);
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
      record.find_student_record (search_id, student_records);
    }
    else if (choice == VIEW_ALL) // view all records
    {
      // call the function view_all_records to display all student records
      record.view_all_records (student_records);
    }
  } while (choice != EXIT); // exit condition
  // User friendly ending.
  cout << endl << "Thanks for using the program";

  return 0;
}

