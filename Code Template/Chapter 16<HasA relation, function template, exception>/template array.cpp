#include <iostream>

using namespace std;

// a template class of flexible type:
//Student
template <class T>
class Grade
{ 
    private:
        int size;
        T * score; // array of T
    public:
        // allocating n spaces
        Grade(int n)
        { 
            size = n;
            score = new T[size];
        }
        // de-allocating the array
        ~Grade()
        { 
            delete [] score;
        }
        // setting value at index pos
        void setGrade(int index, T value);
        // getting value at index pos
        T getGrade(int index);
};

template <class T>
void Grade<T>::setGrade(int index, T value)
{ 
    score[index] = value;
}

template <class T>
T Grade<T>::getGrade(int index)
{ 
    return score[index];
}

int main()
{ 
    // creating 100 elements of strings
    Grade<string> myGrades(100);
    myGrades.setGrade(0, "Math");
    myGrades.setGrade(1, "Physics");
    // displaying the values
    cout<<myGrades.getGrade(0)<<endl;
return 0;
}