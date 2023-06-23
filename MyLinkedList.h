#pragma once
#include <iostream>
/*---------------------
    Node 클래스
----------------------*/

class Node
{
public:
    int value;
    Node* next;

    Node(int value, Node* next = nullptr) : value(value), next(next) {}
};

/*---------------------
    LinkedList 클래스
----------------------*/

class MyLinkedList
{
private:
    Node* head;
    size_t size;

public:
    MyLinkedList() : head(nullptr), size(0) {}

    // 노드를 연결 리스트의 맨 앞에 추가합니다.
    void addHead(int value)
    {
        Node* newNode = new Node(value, head);
        head = newNode;
        size++;
    }

    // 노드를 연결 리스트의 맨 뒤에 추가합니다.
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

    // 연결 리스트에서 주어진 값을 가진 노드를 찾습니다.
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

    // 연결 리스트의 노드 개수를 반환합니다.
    size_t getSize()
    {
        return size;
    }

    // 연결 리스트가 비어 있는지 확인합니다.
    bool isEmpty()
    {
        return size == 0;
    }

    // 연결 리스트의 모든 노드를 출력합니다.
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

    // 소멸자. 클래스 인스턴스가 소멸될 때 메시지를 출력합니다.
    ~MyLinkedList()
    {
        std::cout << "MyLinkedList 소멸자 호출!" << std::endl;
    }
};

