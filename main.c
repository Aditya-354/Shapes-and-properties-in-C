/*
 * AUTHOR: Aditya Swamy
 * Date: Tuesday, 15th April, 2025.
 * Program to find area and parameters, and other properties of circle, triangle, square, rectangle, etc.
 * New features for calculating area, perimeters, volume, and other properties for many other shapes will be
 * added in the future.
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

#define Pi 3.14

void CIRCLE_PROPERTIES(double Radius);                            // circle function prototype
void RECTANGLE_PROPERTIES(double L, double W);                    // rectangle function prototype
void SQUARE_PROPERTIES(double S);                                 // square function prototype

void CIRCLE_PROPERTIES(double Radius)                             // circle function definition
{
    char propertyCmd[100];
    double area, circumference;
    char are[] = "area";
    char circum[] = "circumference"; 

    printf("Enter 'area' to calculate the area\nEnter 'circumference' to calculate the circumference.\n");
    scanf(" %[^\n]%*c", propertyCmd);                              

    int Area = strcmp(propertyCmd, are);
    int Circum = strcmp(propertyCmd, circum);
    area = Pi * pow(Radius, 2);
    circumference = 2 * Pi * Radius;

    if (Area == 0)                                                 
    {
        printf("The area of the circle is %.3lf\n", area);                          
    }
    else if (Circum == 0)
    {
        printf("The circumference of the circle is %.3lf\n", circumference);
    }
    else
    {
        printf("COMMAND ERROR!\n");
    }
}

void SQUARE_PROPERTIES(double S)                                   // square function definition
{
    char propertyCmd[100];
    double area, perimeter;
    char are[] = "area";
    char peri[] = "perimeter";
    printf("Enter 'area' to calculate the area\nEnter 'perimeter' to calculate the perimeter.\n");
    scanf(" %[^\n]%*c", propertyCmd);

    int Area = strcmp(propertyCmd, are);
    int Perimeter = strcmp(propertyCmd, peri);

    area = pow(S, 2);
    perimeter = 4 * S;

    if (Area == 0)
    {
        printf("The area of the square is %.3lf\n", area);
    }
    else if (Perimeter == 0)
    {
        printf("The perimeter of the square is %.3lf\n", perimeter);
    }
}

void RECTANGLE_PROPERTIES(double L, double W)                       // rectangle function definition
{
    int propertyCmd;
    double area, perimeter;

    printf("Enter '1' to calculate the area\nEnter '2' to calculate the perimeter.\n");
    scanf("%d", &propertyCmd);

    area = L * W;
    perimeter = 2 * (L + W);

    switch (propertyCmd)
    {
    case 1:
        printf("The area of the rectangle is %.3lf\n", area);
        break;
    case 2:
        printf("The perimeter of the rectangle is %.3lf\n", perimeter);
        break;
    default:
        printf("COMMAND UNKNOWN!\n");
        break;
    }
}

int main()                                                          // MAIN FUNCTION
{
    char circle[] = "circle";
    char rectangle[] = "rectangle";
    char square[] = "square";
    char MainCmd[100];
    double L, W, Radius;

    printf("Enter 'circle' to calculate the properties of a circle.\n");
    printf("Enter 'square' to calculate the properties of a square.\n");
    printf("Enter 'rectangle' to calculate the properties of a rectangle.\n");
    printf("\nNOTE: The input command is case-sensitive. Please use lowercase letters only.\n");
    scanf(" %[^\n]%*c", MainCmd); // Fixed: removed & and added space

    int CIRCLE = strcmp(MainCmd, circle);
    int SQUARE = strcmp(MainCmd, square);
    int RECTANGLE = strcmp(MainCmd, rectangle);

    if (CIRCLE == 0)                                                // circle function call
    {
        printf("Enter the radius of the circle:\t");
        scanf("%lf", &Radius); // Fixed: added &
        CIRCLE_PROPERTIES(Radius);
    }
    else if (SQUARE == 0)                                           // square function call
    {
        printf("Enter the side length of the square:\t");
        scanf("%lf", &L); // Fixed: added &
        SQUARE_PROPERTIES(L);
    }
    else if (RECTANGLE == 0)                                        // rectangle function call
    {
        printf("Enter the length and width of the rectangle:\n");
        scanf("%lf %lf", &L, &W); // Fixed: added &
        RECTANGLE_PROPERTIES(L, W);
    }
    else
    {
        printf("COMMAND ERROR!\n");
    }

    return 0;
}
