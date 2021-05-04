#include<iostream>
#include<vector>
using namespace std;

int main()
{ 
    vector<int> numbers(10);
    
    // Store the values
    for(int index = 0; index < numbers.size(); index++)
    {
        numbers[index] = index + 1;
    }
    
    // Display the vector elements
    for(auto element : numbers)
    {
        cout << element << " ";
    }

    // 单个地输出vector的值，用.at()
    cout << endl  << endl << numbers.at(0) << " " << numbers.at(5) << endl;

    cout << endl;
////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
    vector<int> numbList;
    // 向vector里面输值是 push_back
    numbList.push_back(10);
    numbList.push_back(20);
    numbList.push_back(30);
    for(auto element : numbList)
    {
        cout << element << " ";
    }
    return 0;
}