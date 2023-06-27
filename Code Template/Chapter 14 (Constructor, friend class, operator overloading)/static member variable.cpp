#include <iostream>

using namespace std;

class Tree
{
    private:
       static int objectCount; // Static member variable.
    public:
        // Constructor
        Tree()
        { objectCount++; }
 
        // Accessor function for objectCount
        int getObjectCount() const
        { return objectCount; }
};

// Definition of the static member variable, written outside the class.
int Tree::objectCount = 0;

int main()
{
    Tree tree1;
    Tree tree2;
    Tree tree3;
    
    // Display the number of Tree object we have.
    cout << "We have " << tree3.getObjectCount() << " trees." << endl;
    return 0;
}