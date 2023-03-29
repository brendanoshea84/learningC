#include <stdio.h>
#include <stdbool.h>

enum primaryColor
{
    red,
    yellow,
    blue
};

int main()
{

    // enum primaryColor myColor;
    // myColor = green;

    // printf("%d", myColor);

    enum gender
    {
        male,
        female
    };
    enum gender myGender;
    myGender = male;

    printf("%d", myGender);

    enum gender anotherGender = female;
    bool isMale = (myGender == anotherGender);

    printf("%s", isMale);

    char myCharacter = "B";

    return 0;
}