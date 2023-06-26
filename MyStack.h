#pragma once
#include <iostream>
#include "Node.h"

/*---------------------
      Stack 클래스
----------------------*/

class MyStack
{
private:
    Node* top;
    size_t size;

public:
    MyStack() : top(nullptr), size(0) {}

    // 스택의 맨 위에 새 요소를 추가합니다.
    void push(int value)
    {
        Node* newNode = new Node(value, top);
        top = newNode;
        size++;
    }

    // 스택의 맨 위 요소를 제거하고 그 값을 반환합니다.
    int pop()
    {
        if (isEmpty())
        {
            std::cerr << "Stack is empty. Can't pop." << std::endl;
            return -1;
        }

        Node* temp = top;
        int value = top->value;
        top = top->next;
        delete temp;
        size--;
        return value;
    }

    // 스택의 맨 위 요소를 반환합니다.
    int peek()
    {
        if (isEmpty())
        {
            std::cerr << "Stack is empty. Can't pop." << std::endl;
            return -1;
        }

        return top->value;
    }

    // 스택이 비어 있는지 확인합니다.
    bool isEmpty()
    {
        return size == 0;
    }

    // 스택의 크기를 반환합니다.
    size_t getSize()
    {
        return size;
    }
 
    // 스택의 모든 요소를 출력합니다.
    void print()
    {
        Node* temp = top;
        while (temp != nullptr)
        {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    ~MyStack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};