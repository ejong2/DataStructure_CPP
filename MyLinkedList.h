#pragma once
#include <iostream>
#include "Node.h"

/*---------------------
    LinkedList Ŭ����
----------------------*/
class MyLinkedList
{
private:
    Node* head;
    size_t size;

public:
    MyLinkedList() : head(nullptr), size(0) {}

    // ��带 ���� ����Ʈ�� �� �տ� �߰��մϴ�.
    void addHead(int value)
    {
        Node* newNode = new Node(value, head);
        head = newNode;
        size++;
    }

    // ��带 ���� ����Ʈ�� �� �ڿ� �߰��մϴ�.
    void addTail(int value)
    {
        Node* newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }

    bool remove(int value)
    {
        if (head == nullptr) return false;

        if (head->value == value)
        {
            Node* temp = head;
            head = head->next;
            delete head;
            size--;
            return true;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->value != value)
        {
            temp = temp->next;
        }

        if (temp->next == nullptr) return false;
        
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
        size--;
        return true;
    }

    // ���� ����Ʈ���� �־��� ���� ���� ��带 ã���ϴ�.
    bool contains(int value)
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->value == value)
            {
                return true;
            }
            temp = temp->next;            
        }
        return false;
    }

    // ���� ����Ʈ�� ��� ������ ��ȯ�մϴ�.
    size_t getSize()
    {
        return size;
    }

    // ���� ����Ʈ�� ��� �ִ��� Ȯ���մϴ�.
    bool isEmpty()
    {
        return size == 0;
    }

    // ���� ����Ʈ�� ��� ��带 ����մϴ�.
    void print()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    // �Ҹ���. Ŭ���� �ν��Ͻ��� �Ҹ�� �� �޽����� ����մϴ�.
    ~MyLinkedList()
    {
        std::cout << "MyLinkedList �Ҹ��� ȣ��!" << std::endl;
    }
};

