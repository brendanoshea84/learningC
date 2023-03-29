#include <stdio.h>

// int main()
int main(int argc, char *argv[])
{

    // double height = 10.00;
    // double width = 2.00;

    // double para = ((height + width) * 2.00);
    // double area = (height * width);

    // printf("Height was: %f\n", height);
    // printf("Width was: %f\n", width);
    // printf("Paraimeter = %f\n", para);
    // printf("Area = %f", area);

    // return 0;

    // double width, height, perimeter, area;

    // printf("Please enter the width and height of the rectangle: ");
    // scanf("%lf %lf", &width, &height);

    // perimeter = 2.0 * (height + width);
    // area = height * width;

    // printf("Perimeter is: %f\n", perimeter);
    // printf("Area is: %f\n", area);

    // return 0;

    double width = atoi(argv[1]);
    double height = atoi(argv[2]);

    double perimeter = 2.0 * (height + width);
    double area = height * width;

    printf("Perimeter is: %f\n", perimeter);
    printf("Area is: %f\n", area);
}
