// operate on the bits in integer values
// not common program

// bit is a 0 or 1
// binary numbers are just 0 and 1
// EXAMPLE: 0 = 10101
//          1 = 0101010
// binary number has a corresponding DECIMAL VALUE

#include <stdio.h>

int main()
{
    unsigned int a = 60; // binary 0011 1100
    unsigned int b = 13; // binary 0000 1101
    int result = 0;

    // result = a & b; // result binary 0000 1100 "result is 12"
    // result = a | b; // result binary 0011 1101 "result is 61"

    result = a << 2; // result = 240

    printf("result is %d", result);

    return 0;
}