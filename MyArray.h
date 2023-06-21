#pragma once

#include <iostream>

/*---------------------
    MyArray 클래스
----------------------*/

// 템플릿 클래스를 사용하여 임의의 타입 T와 크기 S를 가진 배열을 생성합니다.
template<typename T, size_t S>
class MyArray
{
private:
    T arr[S];    // T 타입의 배열
    size_t size; // 배열의 크기

public:
    // 기본 생성자. 배열을 생성하고 모든 요소를 기본 값으로 초기화합니다.
    MyArray() : size(S)
    {
        for (size_t i = 0; i < size; i++)
        {
            arr[i] = T();
        }
    }

    // 인덱스와 값을 받아 배열의 특정 위치에 값을 설정합니다.
    // 인덱스가 유효하지 않으면 예외를 던집니다.
    void set(size_t index, T value)
    {
        if (index >= size)
        {
            throw::std::out_of_range("Index out of range");
        }
        arr[index] = value;
    }

    // 주어진 인덱스에 위치한 배열의 값을 반환합니다.
    // 인덱스가 유효하지 않으면 예외를 던집니다.
    int get(int index)
    {
        if (index < 0 || index >= size)
        {
            throw::std::out_of_range("Index out of range");
        }
        return arr[index];
    }

    // 배열의 모든 요소를 출력합니다.
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    // 소멸자. 클래스 인스턴스가 소멸될 때 메시지를 출력합니다.
    ~MyArray()
    {
        std::cout << " -> MyArray 소멸" << std::endl;
    }
};