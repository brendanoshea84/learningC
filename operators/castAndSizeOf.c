// conversions of data automatically (implicit conversion)

// float point and integer values
// try not to mix (can do it thou)

/*
- floating point value is assigned to an integar variable in C
number gets truncated
    int x = 0;
    float f = 12.125;
    x = f; valued stored in x is 12

- assigning an integar variable to a floating variable,does not change the value
    int x = 0
    int y = 12
    x = y; y= 12

- if 2 int operators, decimal places are discarded (not floating)
example:
    int x = 20
    int y = 12
    c = x/y
    c = 1

- if one is floating and the other is int => performed as a floating
    float x = 20.0
    int y = 12
    c = x/y
    c = 1.888
*/

// casting operator:
// more explicit conversions
/*
    (int) 21.51 + (int) 26.99
    C evaluated to 21 + 26
*/

// "sizeof "is a special keyword:
//      find the byte size is occupied in memory
//      can be a variable, array name, basic data types

// "*" is an operator that represents a pointer to a variable

// " ? : " is an operator for comparisons
//      if condition is true ? then value x : otherwise value y

#include <stdio.h>

int main()
{

    return 0;
}