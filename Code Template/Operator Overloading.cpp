
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