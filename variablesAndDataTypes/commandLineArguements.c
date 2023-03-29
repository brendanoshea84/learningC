#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArgurments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of arguments: %d\n", numberOfArgurments);
    printf("Arguement 1 is the program name: %s\n", argument1);
    printf("Arguement 2 is the command line arguement: %s\n", argument2);

    return 0;
}