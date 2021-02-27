#include <iostream>
#include <cstdlib>

using namespace std;

class FeetInches; // Forward Declaration

// Function Prototypes for Overloaded Stream Operators
ostream &operator<<(ostream &, const FeetInches &);
istream &operator>>(istream &, FeetInches &);

class FeetInches
{
private:
    int feet;        // To hold a number of feet
    int inches;      // To hold a number of inches
public:
    explicit FeetInches(int feet_param = 0, int inches_param = 0);
    void simplify();
    FeetInches operator+(const FeetInches &) const; // Overloaded +
    FeetInches operator-(const FeetInches &) const; // Overloaded -
    FeetInches operator++();                  // Prefix ++
    FeetInches operator++(int);               // Postfix ++
    bool operator>(const FeetInches &) const;       // Overloaded >
    bool operator<(const FeetInches &) const;       // Overloaded <
    bool operator==(const FeetInches &) const;      // Overloaded ==
    friend ostream &operator<<(ostream &, const FeetInches &);
    friend istream &operator>>(istream &, FeetInches &);
};
FeetInches::FeetInches(int feet_param, int inches_param)
{
  feet = feet_param;
  inches = inches_param;
  simplify();
}
//************************************************************
// Definition of member function simplify. This function      *
// checks for values in the inches member greater than       *
// twelve or less than zero. If such a value is found,       *
// the numbers in feet and inches are adjusted to conform    *
// to a standard feet & inches expression. For example,      *
// 3 feet 14 inches would be adjusted to 4 feet 2 inches and *
// 5 feet -2 inches would be adjusted to 4 feet 10 inches.   *
//************************************************************

void FeetInches::simplify()
{
  if (inches >= 12)
  {
    feet += (inches / 12);
    inches = inches % 12;
  }
  else if (inches < 0)
  {
    feet -= ((abs(inches) / 12) + 1);
    inches = 12 - (abs(inches) % 12);
  }
}

FeetInches FeetInches::operator+(const FeetInches &right) const
{
  FeetInches temp;

  temp.inches = inches + right.inches;
  temp.feet = feet + right.feet;
  temp.simplify();
  return temp;
}
FeetInches FeetInches::operator-(const FeetInches &right) const
{
  FeetInches temp;

  temp.inches = inches - right.inches;
  temp.feet = feet - right.feet;
  temp.simplify();
  return temp;
}
FeetInches FeetInches::operator++()
{
  ++inches;
  simplify();
  return *this;
}
FeetInches FeetInches::operator++(int)
{
  FeetInches temp(feet, inches);

  inches++;
  simplify();
  return temp;
}
bool FeetInches::operator>(const FeetInches &right) const
{
  bool status;
  if (feet > right.feet)
  {
    status = true;
  }
  else if (feet == right.feet && inches > right.inches)
  {
    status = true;
  }
  else
  {
    status = false;
  }

  return status;
}
bool FeetInches::operator<(const FeetInches &right) const
{
  bool status;
  if (feet < right.feet)
    status = true;
  else if (feet == right.feet && inches < right.inches)
    status = true;
  else
    status = false;

  return status;
}
bool FeetInches::operator==(const FeetInches &right) const
{
  bool status;
  if (feet == right.feet && inches == right.inches)
  {
    status = true;
  }
  else
  {
    status = false;
  }
  return status;
}
ostream &operator<<(ostream &strm, const FeetInches &obj)
{
  strm << obj.feet << " feet, " << obj.inches << " inches";
  return strm;
}
istream &operator>>(istream &strm, FeetInches &obj)
{
  cout << "Feet: ";
  strm >> obj.feet;
  cout << "Inches: ";
  strm >> obj.inches;

  obj.simplify();
  return strm;
}
int main()
{
  FeetInches first;
  FeetInches second;  // Define two objects.

  // Get a distance for the first object.
  cout << "Enter a distance in feet and inches." << endl;
  cin >> first;

  // Get a distance for the second object.
  cout << "Enter another distance in feet and inches." << endl;
  cin >> second;

  // Display the values in the objects.
  cout << "The values you entered are: " << endl;
  cout << first << " and " << second << endl;
  return 0;
}