//Hengyi Li
//This is a Linked list Program
//This Program Created by Hengyi Li on 5:15 PM, April 27, 2021
//This Program has been done by Hengyi Li on 11:08 PM, April 28, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

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
  /**
   * This is the constructor that makes the list empty
   */
  LinkedList(){headPtr = nullptr;}
  /**
   *  This function push the element to the list
   */
  void push(T);
  /**
   * This function is to check whether the list is empty
   * @return the boolean value, true is empty, false is not empty
   */
  bool isEmpty();

  /**
   * This function is to reverse the list element and output
   */
  void Output(LinkedList &List);

  /**
   * This is the destructor to released the memory
   */
  ~LinkedList();
};

template <class T>
bool LinkedList<T>::isEmpty()
{
   if ( headPtr == nullptr)
   {
     return true;
   }
   return false;
}

template <class T>
void LinkedList<T>::push(T item)
{
   Node *newNode = nullptr; // Pointer to a new node

   // Allocate a new node and store num there.
   newNode = new Node;
   newNode->data = item;

   // If there are no nodes in the list
   // make newNode the first node.
   if (isEmpty())
   {
      headPtr = newNode;
      newNode->next = nullptr;
   }
   else  // Otherwise, insert NewNode before top.
   {
      newNode->next = headPtr;
      headPtr = newNode;
   }
}
 
template<class T>
void LinkedList<T>::Output(LinkedList &List)
{
  Node *currentPtr = headPtr;
  //Open the output file
  std::ofstream output_file;
  output_file.open("../output.txt");
  //Output everything
  std::cout << std::endl << "Output the node elements" << std::endl;
  // as long as currentPtr is pointing to some valid node
  while (currentPtr != nullptr)
  {
      // display the node value
      output_file << currentPtr->data << " ";
      // move to the next node
      currentPtr = currentPtr->next;
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
  //Create a linked list
  LinkedList<std::string> myList;
  //preparing file open
  std::ifstream infile;
  //open the file
  infile.open("../input.txt");
  //preparing the temp variable for transferring data
  std::string readFile;
  //Reading from the file
  while(infile >> readFile)
  {
    //Push data to the list
    myList.push(readFile);
  }
  //output everything
  myList.Output(myList);

  return 0;
}
