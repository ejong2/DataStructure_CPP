#include <iostream>

#include "MyArray.h"
#include "MyLinkedList.h"
#include "MyStack.h"

using namespace std;

const int MAX = 5;

void StartMyArray();
void StartMyLinkedList();
void StartMyStack();

int main()
{
    //StartMyArray();
    //StartMyLinkedList();
    StartMyStack();

    return 0;
}

/*---------------------
     MyArray Start
----------------------*/
void StartMyArray()
{
    MyArray <int, 5> arr;
    for (int i = 0; i < MAX; i++)
    {
        arr.set(i, i + 1);
    }
    arr.print();
}

/*--------------------------
     MyLinkedList Start
---------------------------*/
void StartMyLinkedList()
{
    MyLinkedList list;
    for (int i = 0; i < MAX; i++)
    {
        list.addHead(i + 1);
    }
    list.print();

    if (list.remove(3))
    {
        std::cout << "Node with value 3 removed. \n";
        list.print();
    }
    else
    {
        std::cout << "Node with value 3 not found. \n";
    }

    std::cout << "List contains 2: " << (list.contains(2) ? "Yes" : "No") << "\n";
    std::cout << "List size: " << list.getSize() << "\n";
}

/*---------------------
      Stack Start
----------------------*/
void StartMyStack()
{
    MyStack stack;
    for (int i = 0; i < MAX; i++)
    {
        stack.push(i + 1);
    }
    stack.print();

    std::cout << "Stack size: " << stack.getSize() << "\n";
    std::cout << "Stack top: " << stack.peek() << "\n";

    if (stack.pop())
    {
        std::cout << "Popped from stack. \n";
        stack.print();
    }
    else
    {
        std::cout << "Stack is empty. \n";
    }
}





