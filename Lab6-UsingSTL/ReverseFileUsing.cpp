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
  // add one element to the end of the list
  void append(T data)
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
  
  void pop()
  {
    std::cout << std::endl << "Pop the node elements" << std::endl;
    Node *currentPtr = nullptr;
    std::ofstream output_file;
    output_file.open("../output.txt");
    // as long as currentPtr is pointing to some valid node
    while (currentPtr != nullptr)
    {
      // display the node value
      output_file << currentPtr->data << " ";
      // move to the next node
      currentPtr = currentPtr->prev;
    }
  }
  // destructor to release allocated memory
  ~LinkedList()
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
};

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
  myList.pop();
  
  return 0;
}
