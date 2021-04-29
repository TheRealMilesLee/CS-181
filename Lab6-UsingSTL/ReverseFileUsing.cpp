//Hengyi Li
//This is a Linked list Program
//This Program Created by Hengyi Li on 5:15 PM, April 27, 2021
//This Program has been done by Hengyi Li on 10:18 PM, April 27, 2021.
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
   * This function is to add the value at the end of the list
   */
  void append(T data);

    /**
   * This function overload the [] symbol
   * @param index is the place on array
   * @return the place on the array
   */
  T &operator[](const int &index);

  /**
   * This function is to reverse the list element and output
   */
  void reverseOutput();

  /**
   * This is the destructor to released the memory
   */
  ~LinkedList();
};
template <class T>
T &LinkedList<T>::operator[](const int &index)
{
  if (index >= size || index < 0)
  {
    throw StorageException();
  }
  return array[index];
}

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
  //TODO #1 Need using dynamic stack variable to reverse the contents of the file.
  
  //Open the output file
  std::ofstream output_file;
  output_file.open("../output.txt");
  //Output everything
  std::cout << std::endl << "Output the node elements" << std::endl;
  Node *outputPtr = headPtr;
  // as long as currentPtr is pointing to some valid node
  while (outputPtr != nullptr)
  {
    output_file << outputPtr->data << " ";
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
