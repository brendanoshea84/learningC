#include <stdio.h>

int main()
{
    // _Bool a = 0;
    // _Bool b = 1;
    // _Bool result;

    // result = a && b;

    // printf("%d", result);

    // _Bool a = 0;
    // _Bool b = 0;
    // _Bool result;

    // result = a || b;

    // printf("%d", result);

    _Bool a = 0;
    _Bool b = 0;
    _Bool result;

    result = a || b;

    printf("%d", result);
    return 0;
}

// ******* assignment operators ******

// c = a+b;
// c += a      ==  c= c+a;
// c -=a       ==  c = c-a;
// c *= a      ==  c = c*a

// c /= a       == c = c/a
// c %= a       == c = c%a
// c <<= 2      == c = c<<2     left shift and assignmnet operator
// c >>= 2      == c = c>>2     right shift and assignment operator
// c &= 2       == c = c&2      bitwise
// c ^= 2       == c = c^2      bitwise exclusive OR and assignment operator
// c |= 2       == c = c| 2     bitwise inclusive OR and assignment operator

// == check 2 values are equal, if yes condition is TRUE    (a==b) is not true
// != check if 2 values are NOT equal, if no condiion is TRUE   (a != B) TRUE

// > check if left value if larger
// < check if right value is larger

// >= check if left is equal and/or larger
// <= check if right is equal and/or larger