#include <iostream>
#include <fstream>
#include <algorithm>

template <class T>
class LinkedList
{
private:
  struct Node
  {
    T data;
    Node *next;
  };
  Node *headPtr;
public:
  LinkedList(){headPtr = nullptr;}
  void append(T data);
  void reverseOutput();
  ~LinkedList();
};

template<class T>
void LinkedList<T>::append(T data)
{
  Node *newNode = new Node;
  newNode->data = data;
  newNode->next = nullptr;
  
  // is the list empty, then headPtr should point to the newNode
  if (headPtr == nullptr)
  {
    headPtr = newNode;
  }
  else // otherwise, navigate to the last node of the list
  {
    Node *currentPtr = headPtr;
    while (currentPtr->next != nullptr)
    {
      currentPtr = currentPtr->next;
    }
    // make the last node link to the newNode
    currentPtr->next = newNode;
  }
}

template<class T>
void LinkedList<T>::reverseOutput()
{
  Node *currentPtr = headPtr;
  Node *previousPtr = nullptr;
  Node *nextPtr;
  std::ofstream output_file;
  output_file.open("../output.txt");
  while(currentPtr != nullptr)
  {
    //Initialize the next pointer points to the next node of the list
    nextPtr = currentPtr->next;
    //Flip the node pointer to make it points to the previous node
    currentPtr->next = previousPtr;
    //Move previous and current pointer one node forward
    previousPtr = currentPtr;
    currentPtr = nextPtr;
  }
  //Make head pointer points to the first element of the new list (i.e. the last element of the original list)
  headPtr = previousPtr;
  //Output everything
  std::cout << std::endl << "Output the node elements" << std::endl;
  Node *outputPtr = headPtr;
  // as long as currentPtr is pointing to some valid node
  while (outputPtr != nullptr)
  {
    output_file << outputPtr->data << " ";
    // move to the next node
    outputPtr = outputPtr->next;
  }
}

template<class T>
LinkedList<T>::~LinkedList()
{
  Node *currentPtr = headPtr;
  // continue as long as there are elements in the list
  while (currentPtr != nullptr)
  {
    // store the next element
    Node *tempNext = currentPtr->next;
    // delete the current element
    delete currentPtr;
    // move to the next element
    currentPtr = tempNext;
  }
}

int main()
{
  LinkedList<std::string>myList;
  std::ifstream infile;
  infile.open("../input.txt");
  std::string readFile;
  while(!infile.eof())
  {
    infile >> readFile;
    myList.append (readFile);
  }
  myList.reverseOutput();

  return 0;
}
