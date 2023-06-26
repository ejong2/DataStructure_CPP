#pragma once
#include <iostream>
#include "Node.h"

/*----------------------
      Stack Ŭ����
-----------------------*/

class MyStack
{
private:
    Node* top;
    size_t size;

public:
    MyStack() : top(nullptr), size(0) {}

    // ������ �� ���� �� ��Ҹ� �߰��մϴ�.
    void push(int value)
    {
        Node* newNode = new Node(value, top);
        top = newNode;
        size++;
    }

    // ������ �� �� ��Ҹ� �����ϰ� �� ���� ��ȯ�մϴ�.
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

    // ������ �� �� ��Ҹ� ��ȯ�մϴ�.
    int peek()
    {
        if (isEmpty())
        {
            std::cerr << "Stack is empty. Can't pop." << std::endl;
            return -1;
        }

        return top->value;
    }

    // ������ ��� �ִ��� Ȯ���մϴ�.
    bool isEmpty()
    {
        return size == 0;
    }

    // ������ ũ�⸦ ��ȯ�մϴ�.
    size_t getSize()
    {
        return size;
    }
 
    // ������ ��� ��Ҹ� ����մϴ�.
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