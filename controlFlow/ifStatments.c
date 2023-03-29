#include <stdio.h>

int main()
{
    // if statements
    int score = 95;
    int big = 90;

    // simple statement if(no brackets)
    if (score > big)
        printf("jackpot!! \n");

    // compound statement if , brackets
    if (score > big)
    {
        score++;
        printf("You win \n");
    }

    // *********************************
    // if else statements
    /*
    EXAMPLE
    if(expressions)
        statement 1;
    else
        statement 2
    */

    int number_to_test, remainder;

    printf("Enter your number to test: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
    {
        printf("the number is even \n");
    }
    else
    {
        printf("Number is odd \n");
    }

    // *********************************
    // else if

    /*
    EXAMPLE
    if(expression 1)
        statement 1
    else if(expression 2)
        statement 2
    else
        statement 3
    */

    int number, sign;

    printf("please type a number: ");
    scanf("%i", &number);

    if (number < 0)
    {
        sign = -1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else
    {
        sign = 1;
    }
    printf("Sign = %i \n", sign);

    // *********************************
    // nested if else statement
    /*
    if (gamesIsOver == 0)
        if (playerToMove == Your){
            printf("Your Move \n");
        } else {
            printf("My Move \n");
        }
    else
        printf("Th game is over \n")
    */

    // *********************************
    // conditional operator (ternary statement)
    // condition ? expression1 : expression2
    //              True            False
    // single statement

    // EXAMPLE
    /* x = y > 7 ? 25 : 50;
    result x = 25 if y is greater than 7 otherwise 50
*/

    // in another words
    /*
    if(y>7)
        x = 25;
    else
        x = 50;
    */

    return 0;
}