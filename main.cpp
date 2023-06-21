#include <iostream>

#include "MyArray.h"

using namespace std;

const int MAX = 5;

void StartMyArray();

int main()
{
    StartMyArray();

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