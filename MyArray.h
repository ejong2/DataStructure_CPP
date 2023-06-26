#pragma once
#include <iostream>

/*---------------------
     Array Ŭ����
----------------------*/

// ���ø� Ŭ������ ����Ͽ� ������ Ÿ�� T�� ũ�� S�� ���� �迭�� �����մϴ�.
template<typename T, size_t S>
class MyArray
{
private:
    T arr[S];    // T Ÿ���� �迭
    size_t size; // �迭�� ũ��

public:
    // �⺻ ������. �迭�� �����ϰ� ��� ��Ҹ� �⺻ ������ �ʱ�ȭ�մϴ�.
    MyArray() : size(S)
    {
        for (size_t i = 0; i < size; i++)
        {
            arr[i] = T();
        }
    }

    // �ε����� ���� �޾� �迭�� Ư�� ��ġ�� ���� �����մϴ�.
    // �ε����� ��ȿ���� ������ ���ܸ� �����ϴ�.
    void set(size_t index, T value)
    {
        if (index >= size)
        {
            throw::std::out_of_range("Index out of range");
        }
        arr[index] = value;
    }

    // �־��� �ε����� ��ġ�� �迭�� ���� ��ȯ�մϴ�.
    // �ε����� ��ȿ���� ������ ���ܸ� �����ϴ�.
    int get(int index)
    {
        if (index < 0 || index >= size)
        {
            throw::std::out_of_range("Index out of range");
        }
        return arr[index];
    }

    // �迭�� ��� ��Ҹ� ����մϴ�.
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    // �Ҹ���. Ŭ���� �ν��Ͻ��� �Ҹ�� �� �޽����� ����մϴ�.
    ~MyArray()
    {
        std::cout << " -> MyArray �Ҹ�" << std::endl;
    }
};