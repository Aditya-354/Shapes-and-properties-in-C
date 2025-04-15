/*
    * AUTHOR: Aditya Swamy
    * Date: Tuesday, 15th April, 2025.
    * Program to find area and parameters, and other properties of circle, triangle, square, rectangle, etc.
    * New features for calculating area, perimeters, volume, and other properties for many other shapes will be
    * added in the future.
*/

#include <stdio.h>
#include <math.h>
#define Pi 3.14
void CIRCLE_PROPERTIES(double Radius);
void RECTANGLE_PROPERTIES(double L, double W);
void SQUARE_PROPERTIES(double S);






int main()
{
    int MainCmd;
    double L;
    double W;
    double Radius;

    printf("Enter '1' to calculate the properties of circle.\n");
    printf("Enter '2' to calculate the properties of square.\n");
    printf("Enter '3' to calculate the properties of a rectangle.\n");
    scanf("%d", &MainCmd);

    switch(MainCmd)
    {
        case 1:
        printf("Enter the radius of the circle:\t");
        scanf("%lf", &Radius);
        CIRCLE_PROPERTIES(Radius);
        break;

        case 2:
        printf("Enter the length:\t");
        scanf("%lf", &L);
        SQUARE_PROPERTIES(L);
        break;

        case 3:
        printf("Enter the length:\t");
        scanf("%lf", L);
        printf("Enter the width:\t");
        scanf("%lf", W);
        RECTANGLE_PROPERTIES(L, W);
        break;

        default:
        printf("COMMAND UNKNOWN ! ");
        break;
    }

    return 0;
}



void CIRCLE_PROPERTIES(double Radius)
{
    int propertyCmd;
    double area, circumference;

    printf("Enter '1' to calculate the area\nEnter '2' to calculate the circumference.\n");
    scanf("%d", &propertyCmd);

    area = Pi * pow(Radius, 2);
    circumference = 2 * Pi * Radius;

    switch(propertyCmd)
    {
        case 1:
        printf("The area of the circle is %.2lf\n", area);
        break;

        case 2:
        printf("The circumference of the circle is %.2lf\n", circumference);
        break;

        default:
        printf("COMMAND UNKNOWN ! ");
        break;
    }
}



void SQUARE_PROPERTIES(double S){
    int propertyCmd;
    double area, perimeter;
    printf("Enter '1' to calculate the area\nEnter '2' to calculate the perimeter.\n");
    scanf("%d", &propertyCmd);

    area = pow(S, 2);
    perimeter = 4 * S;

    switch (propertyCmd)
    {
    case 1:
        printf("The area of the square is %.2lf\n", area);
        break;

    case 2:
    printf("The perimeter of the square is  %.2lf\n", perimeter);
        break;

    default:
    printf("COMMAND UNKNOWN ! ");
        break;
    }
}



void RECTANGLE_PROPERTIES(double L, double W){
    int propertyCmd;
    double area, perimeter;

    printf("Enter '1' to calculate the area\nEnter '2' to calculate the perimeter.\n");
    scanf("%d", &propertyCmd);
    
    area = L * W;
    perimeter = 2 * (L + W);

    switch (propertyCmd)
    {
    case 1:
        printf("The area of the rectangle is %.2lf\n", area);
        break;

    case 2:
    printf("The perimeter of the rectangle is  %.2lfn", perimeter);
        break;

    default:
    printf("COMMAND UNKNOWN ! ");
        break;
    }
}
