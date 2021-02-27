//Hengyi Li
//This is a Inches-Feet Convension Program
//This Program Created by Hengyi Li on 12:00 AM, Feb 27, 2021
//This Program has been modify by Hengyi Li on 12:40 PM, Feb 27, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iostream>
#include <cstdlib>

class FeetInches;

std::ostream &operator<<(std::ostream &, const FeetInches &);
std::istream &operator>>(std::istream &, FeetInches &);

class FeetInches
{
private:
    int feet;
    int inches;
public:
    /**
     * This is a constructor that accepts two parameter from user input
     * @param feet_param is the value of length in feet, and it has being initialized to be 0 by default
     * @param inches_param is the value of length in inches, and it has being initialized to be 0 by default
     */
    FeetInches(int feet_param = 0, int inches_param = 0);

    /**
     * This is the copy constructor accept a FeetInches object as an argument.
     * @param param is the object parameter
     */
    FeetInches (const FeetInches &param);

    /**
     * This function is to simplify the feet and inches input and checks the value if is greater that 12 or less that 0.
     * If such a value is found, the numbers in feet and inches are adjusted to conform to a standard feet & inches expression.
     */
    void simplify();

    /**
     * This function is to overload the + operator
     * @return the result of the operator overload +.
     */
    FeetInches operator+(const FeetInches &) const;

    /**
     * This function is to overload the - operator
     * @return the result of the operator overload -.
     */
    FeetInches operator-(const FeetInches &) const;

    /**
     * This function is to overload the >= operator
     * @return the boolean comparison result
     */
    bool operator>=(const FeetInches &) const;

    /**
     * This function is to overload the <= operator
     * @return the boolean comparison result
     */
    bool operator<=(const FeetInches &) const;

    /**
     * This function is to overload the == operator
     * @return the boolean comparison result
     */
    bool operator==(const FeetInches &) const;

    /**
     * This function is to overload the != operator
     * @return the boolean comparison result
     */
    bool operator!=(const FeetInches &) const;

    /**
     * This function is to overload the stream insertion operator
     * @return the result of the stream insertion act.
     */
    friend std::ostream &operator<<(std::ostream &, const FeetInches &);

    /**
     * This function is to overload the stream extraction operator
     * @return the result of the stream extraction act.
     */
    friend std::istream &operator>>(std::istream &, FeetInches &);
};
FeetInches::FeetInches(int feet_param, int inches_param)
{
  feet = feet_param;
  inches = inches_param;
  simplify();
}
FeetInches::FeetInches(const FeetInches &param)
{
  feet = param.feet;
  inches = param.inches;
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
bool FeetInches::operator>=(const FeetInches &right) const
{
  bool status;
  if (feet >= right.feet)
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
  if (feet <= right.feet)
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
std::ostream &operator<<(std::ostream &stream_insertion, const FeetInches &obj)
{
  stream_insertion << obj.feet << " feet, " << obj.inches << " inches";
  return stream_insertion;
}
std::istream &operator>>(std::istream &stream_extraction, FeetInches &obj)
{
  std::cout << "Feet: ";
  stream_extraction >> obj.feet;
  std::cout << "Inches: ";
  stream_extraction >> obj.inches;

  obj.simplify();
  return stream_extraction;
}
int main()
{
  FeetInches first;
  FeetInches second;

  //Get the user input
  std::cout << "Enter a distance in feet and inches." << std::endl;
  std::cin >> first;
  std::cout << "Enter another distance in feet and inches." << std::endl;
  std::cin >> second;

  //Display the user input
  std::cout << "The values you entered are: " << std::endl;
  std::cout << first << " and " << second << std::endl;

  if(first == second)
  {
    std::cout << "The first is equal to second" << std::endl;
  }
  else if(first != second && first >= second)
  {
    std::cout << "The first is not equal to second, but the feet of first is greater than or equal to second" << std::endl;
  }
  else if(first != second && first <= second)
  {
    std::cout << "The first is not equal to second, but the feet of first is less than or equal to second" << std::endl;
  }
  else
  {
    std::cout << "Error, this could not be exist!" << std::endl;
  }

  //Use of the plus operator overload
  FeetInches third = first + second;
  std::cout << "The combination of first and second is: " << third << std::endl;

  //Use of the minus operator overload
  FeetInches fourth = first - second;
  std::cout << "The result of first minus second is: " << fourth << std::endl;

  //Use of copy constructor.
  FeetInches FivethObject = fourth;
  std::cout << "Here is what you really need: " << FivethObject;
  return 0;
}