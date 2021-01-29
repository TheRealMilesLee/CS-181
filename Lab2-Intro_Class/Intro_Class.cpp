//Hengyi Li
//This is a RecordManagement Program
//This Program Created by Hengyi Li on 8:15 PM, Jan 27, 2021
//This Program has been modify by Hengyi Li on 10:42 AM, Jan 21, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iostream>
#include <string>
#include <memory>
#include "StudentCollection.h"
#include "Student.h"
#include <istream>

const int NOT_FOUND = -1;

// menu choices
enum MenuOptions
{
    ADD_NEW, VIEW_ALL, SEARCH, DELETE, SAVE_ALL, EXIT
};

/**
 * This function used to display the menu and return the selection
 * @return the choice from the user
 */
int display_menu();

int main()
{
  std::unique_ptr<Student> myStudent (new Student);

  int choice = EXIT;  // gets the choice from the user
  StudentCollection myStudentRecords;

  // load all student entries from the file, create objects, and add them in the collection
  myStudentRecords.load_all_records ();

  do
  {
    choice = display_menu ();

    switch (choice)
    {
      case ADD_NEW: // add new record

        myStudentRecords.add_new_record ();
        break;


      case SEARCH: // search based on title
        int search_id;

        // get the ID to search from the user
        std::cout << std::endl << "Enter the ID that you want to search: ";
        std::cin >> search_id;
        std::cin.ignore(); // consume the new line character

        myStudentRecords.find_student_record (search_id);
        break;

      case VIEW_ALL: // view all records

        // call the function view_all_records to display all student records
        myStudentRecords.view_all_records ();
        break;


      case DELETE: // delete a record
        int delete_id;
        std::cout << std::endl << "Enter the ID that you want to delete: ";
        std::cin >> delete_id;
        std::cin.ignore(); // consume the new line character
        myStudentRecords.delete_record (delete_id);
        break;


      case SAVE_ALL: // save all student object entries in a file
        myStudentRecords.save_all_records ();
        std::cout << std::endl << "Success! all records have been saved.";
        break;

      case EXIT: // Exit the program
        std::cout << std::endl << "Thanks for using the program";
        break;

      default:
        std::cout << "\nInvalid choice. Try again: \n";
        break;
    }

  } while (choice != EXIT); // exit condition


  return 0;
}


// display the menu and return the selection
int display_menu()
{
  std::cout << std::endl << std::endl << std::to_string (ADD_NEW) + ". Add a new student record" << std::endl
       << std::to_string (VIEW_ALL) + ". View all student records" << std::endl
       << std::to_string (SEARCH) + ". Find a record by its ID number" << std::endl
       << std::to_string (DELETE) + ". Delete a student record" << std::endl
       << std::to_string (SAVE_ALL) + ". Save all student records in file" << std::endl
       << std::to_string (EXIT) + ". Exit the program" << std::endl
       << "Your choice: ";

  int choice = EXIT; // default choice is exit

  std::cin >> choice; // getting the user's choice

  return choice;
}