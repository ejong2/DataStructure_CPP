#pragma once

/*---------------------
       Node Ŭ����
----------------------*/
class Node
{
public:
    int value;
    Node* next;

    Node(int value, Node* next = nullptr) : value(value), next(next) {}
};