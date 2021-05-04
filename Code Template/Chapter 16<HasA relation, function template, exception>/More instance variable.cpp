#include<iostream>
#include<string>
using namespace std;
// a template class of flexible type:
//Student
template <class TINT, class TSTRING>
class Student
{
    private:
        TINT id;
        TSTRING name;
    public:
    // allocating n spaces
    Student(TINT id, TSTRING name)
    { 
        this->id = id;
        this->name = name;
    }
    // getting value at index pos
    void display()
    { 
        cout << id << + " " << name;
    }
};
// testing the defined class

int main()
{ 
    // creating a student
    Student<int, string> student(100, "Kafi");
    student.display();
    return 0;
}