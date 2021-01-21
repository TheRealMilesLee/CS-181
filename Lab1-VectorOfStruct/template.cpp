// @author: Kafi Rahman
// The purpose of the program is to store student record information
// search the student record by using student_id and lastly,
// display all the records in a menu based system

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


// this function will input values for a new movie record
// and will return that
void add_new_record(Student & newStudent)
{
  cout<<endl<<"Student ID: ";
  cin>>newStudent.id;

  cin.ignore(); // ignores the newline character

  cout<<"Student Name: ";
  getline(cin, newStudent.name);
}


// creating a single string value out of
// all the fields of the movie struct
string to_string(const Student & student_rec)
{
  string result = "create the string from a student record"; 

  return result;
}



// search the student records based on title
[[noreturn]] void find_student_record(unsigned search_id, const vector<Student> & student_records)
{ bool found_flag = false;

  // TODO - SEARCHING the vector
  // loop through all the elements of the student record
  // check whether the ID of the student matches with the search_id
  // if yes, change the found_flag to be true and display the record

  // if a record is found found_flag becomes true
  if(found_flag==false)
  {
    cout<<endl<<"The record was not found: ";
  }
  cout<<endl<<"Thanks for using search .."<<endl;
}


// view all student records
void view_all_records(const vector<Student> & student_records)
{
  cout<<endl<<endl<<"We have the following student records: ";
  // use a loop and call the to_string method to display the records
  for(unsigned i=0;i<student_records.size();i++)
  {
    cout<<endl<<to_string(student_records[i]);
  }
}



// display the menu and return the selection
string display_menu()
{
  cout<<endl<<endl<<ADD_NEW +  ". Add a new student record"<<endl
    <<SEARCH + ". Find a record by its ID number"<<endl
    <<VIEW_ALL + ". View all student records"<<endl
    <<EXIT + ". Exit the program"<<endl
    <<"Your choice: ";

  string choice = EXIT; // default choice is exit

  getline(cin, choice); // getting the user's choice

  return choice;
}





// the main function
int main()
{
  string choice = EXIT;  // gets the choice from the user
  vector<Student> student_records; // holds all student records

  do {
    choice = display_menu();

    if(choice==ADD_NEW) // add new record
    {
      // TODO - adding new struct elements in the vector variable
      // Declare a variable of Student struct type

      // call the add_new_record function; use the struct variable as the parameter

      // add the struct variable to the student_records vector

    }
    else if(choice==SEARCH) // search based on title
    {

      int search_id;

      // get the ID to search from the user
      cout<<endl<<"Search ID: ";
      cin>>search_id;
      cin.ignore(); // consume the new line character

      // call the search function and supply it with the search id
      find_student_record(search_id, student_records);

    }
    else if(choice == VIEW_ALL) // view all records
    {
      // call the function view_all_records to display all student records
      view_all_records(student_records);
    }

  } while (choice!=EXIT); // exit condition

  cout<<endl<<"Thanks for using the program";
  return 0;
}






