#include <stdio.h>
// challenge 2
// sizeof

/*
    show the byte size of different data types
    = memory is different on different systems
*/
int main()
{
    int xint = sizeof(int);
    int xchar = sizeof(char);
    int xlong = sizeof(long);
    int xll = sizeof(long long);
    int xdouble = sizeof(double);
    int xldouble = sizeof(long double);

    printf("int: %zd \n", xint);
    printf("char: %zd \n", xchar);
    printf("long: %zd \n", xlong);
    printf("long long: %zd \n", xll);
    printf("double: %zd \n", xdouble);
    printf("double double: %zd \n", xldouble);

    return 0;
}