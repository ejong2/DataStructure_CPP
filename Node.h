#pragma once

/*---------------------
       Node Å¬·¡½º
----------------------*/
class Node
{
public:
    int value;
    Node* next;

    Node(int value, Node* next = nullptr) : value(value), next(next) {}
};