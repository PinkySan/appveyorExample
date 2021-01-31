#include <iostream>
#include "hello.h"

constexpr int MAGIC_NUMBER = 42;

void sayHello()
{
    std::cout << "Hello World" << std::endl;
}

int returnValue()
{
    return MAGIC_NUMBER;
}

int& returnInvalidReference()
{
    int value = 42;
    return value;
}

int* returnInvalidPointer()
{
    int value = 42;
    return &value;
}