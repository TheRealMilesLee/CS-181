#include <iostream>
#include <cstdlib>

using namespace std;

class FeetInches;

ostream &operator<<(ostream &, const FeetInches &);
istream &operator>>(istream &, FeetInches &);

class FeetInches
{
private:
    int feet;
    int inches;
public:
    explicit FeetInches(int feet_param = 0, int inches_param = 0);
    void simplify();
    FeetInches operator+(const FeetInches &) const;
    FeetInches operator-(const FeetInches &) const;
    FeetInches operator++();
    FeetInches operator++(int);
    FeetInches operator--();
    FeetInches operator--(int);
    bool operator>=(const FeetInches &) const;
    bool operator<=(const FeetInches &) const;
    bool operator==(const FeetInches &) const;
    bool operator!=(const FeetInches &) const;
    friend ostream &operator<<(ostream &, const FeetInches &);
    friend istream &operator>>(istream &, FeetInches &);
};
FeetInches::FeetInches(int feet_param, int inches_param)
{
  feet = feet_param;
  inches = inches_param;
  simplify();
}
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
  ++feet;
  simplify();
  return *this;
}
FeetInches FeetInches::operator++(int)
{

  feet++;
  inches++;
  FeetInches temp(feet, inches);
  simplify();
  return temp;
}
FeetInches FeetInches::operator--()
{
  --inches;
  --feet;
  simplify();
  return *this;
}
FeetInches FeetInches::operator--(int)
{
  feet--;
  inches--;
  FeetInches temp(feet, inches);
  simplify();
  return temp;
}
bool FeetInches::operator>=(const FeetInches &right) const
{
  bool status;
  if (feet >= right.feet && inches >= right.inches)
  {
    status = true;
  }
  else
  {
    status = false;
  }
  return status;
}

bool FeetInches::operator<=(const FeetInches &right) const
{
  bool status;
  if (feet <= right.feet && inches <= right.inches)
  {
    status = true;
  }
  else
  {
    status = false;
  }
  return status;
}

bool FeetInches::operator!=(const FeetInches &right) const
{
  bool status;
  if (feet != right.feet && inches != right.inches)
  {
    status = true;
  }
  else
  {
    status = false;
  }
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
ostream &operator<<(ostream &stream_insertion, const FeetInches &obj)
{
  stream_insertion << obj.feet << " feet, " << obj.inches << " inches";
  return stream_insertion;
}
istream &operator>>(istream &stream_extraction, FeetInches &obj)
{
  cout << "Feet: ";
  stream_extraction >> obj.feet;
  cout << "Inches: ";
  stream_extraction >> obj.inches;

  obj.simplify();
  return stream_extraction;
}
int main()
{
  FeetInches first;
  FeetInches second;

  cout << "Enter a distance in feet and inches." << endl;
  cin >> first;
  cout << "Enter another distance in feet and inches." << endl;
  cin >> second;

  cout << "The values you entered are: " << endl;
  cout << first << " and " << second << endl;

  if(first == second)
  {
    cout << "The first is equal to second" << endl;
  }
  else if(first != second && first >= second)
  {
    cout << "The first is not equal to second, but greater than or equal to second" << endl;
  }
  else if(first != second && first <= second)
  {
    cout << "The first is not equal to second, but less than or equal to second" << endl;
  }
  else
  {
    cout << "Error, this could not be exist!";
  }

  FeetInches third = first + second;
  cout << "The combination of first and second is: " << third << endl;

  FeetInches fourth = first - second;
  cout << "The result of first minus second is: " << fourth << endl;

  // Use the prefix ++ operator.
  cout << endl << "Demonstrating prefix ++ operator" << endl;
  first = ++second;
  cout << "first: " << first << endl;
  cout << "second: " << second << endl;

  // Use the postfix ++ operator.
  cout << endl << "Demonstrating postfix ++ operator" << endl;
  first = second++;
  cout << "first: " << first << endl;
  cout << "second: " << second << endl;
  // Use the prefix -- operator.
  cout << endl << "Demonstrating prefix -- operator" << endl;
  first = --second;
  cout << "first: " << first << endl;
  cout << "second: " << second << endl;

  // Use the postfix -- operator.
  cout << endl << "Demonstrating postfix -- operator" << endl;
  first = second--;
  cout << "first: " << first << endl;
  cout << "second: " << second << endl;
  
  return 0;
}