/*
 * AUTHOR: Aditya Swamy
 * Date: Tuesday, 15th April, 2025.
 * Program to find area and parameters, and other properties of circle, triangle, square, rectangle, etc.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define Pi 3.14

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void CIRCLE_PROPERTIES(double Radius)
{
    char propertyCmd[100];
    double area = Pi * pow(Radius, 2);
    double circumference = 2 * Pi * Radius;

    printf("Enter 'area' to calculate the area\nEnter 'circumference' to calculate the circumference.\n");
    scanf(" %[^\n]%*c", propertyCmd);

    if (strcmp(propertyCmd, "area") == 0)
    {
        printf("The area of the circle is %.3lf\n", area);
    }
    else if (strcmp(propertyCmd, "circumference") == 0)
    {
        printf("The circumference of the circle is %.3lf\n", circumference);
    }
    else
    {
        printf("COMMAND UNKNOWN !\n");
    }
}

void SQUARE_PROPERTIES(double S)
{
    char propertyCmd[100];
    double area = pow(S, 2);
    double perimeter = 4 * S;

    printf("Enter 'area' to calculate the area\nEnter 'perimeter' to calculate the perimeter.\n");
    scanf(" %[^\n]%*c", propertyCmd);

    if (strcmp(propertyCmd, "area") == 0)
    {
        printf("The area of the square is %.3lf\n", area);
    }
    else if (strcmp(propertyCmd, "perimeter") == 0)
    {
        printf("The perimeter of the square is %.3lf\n", perimeter);
    }
    else
    {
        printf("COMMAND UNKNOWN !\n");
    }
}

void RECTANGLE_PROPERTIES(double L, double W)
{
    char propertyCmd[100];
    double area = L * W;
    double perimeter = 2 * (L + W);

    printf("Enter 'area' to calculate the area\nEnter 'perimeter' to calculate the perimeter.\n");
    scanf(" %[^\n]%*c", propertyCmd);

    if (strcmp(propertyCmd, "area") == 0)
    {
        printf("The area of the rectangle is %.3lf\n", area);
    }
    else if (strcmp(propertyCmd, "perimeter") == 0)
    {
        printf("The perimeter of the rectangle is %.3lf\n", perimeter);
    }
    else
    {
        printf("COMMAND UNKNOWN !\n");
    }
}

int main()
{
    char MainCmd[100];
    double L, W, Radius;

    while (1)
    {
        printf("\n==============================\n");
        printf("Enter 'circle' to calculate the properties of a circle.\n");
        printf("Enter 'square' to calculate the properties of a square.\n");
        printf("Enter 'rectangle' to calculate the properties of a rectangle.\n");
        printf("Enter 'terminate' to finish the calculation\n");
        printf("\nNOTE: The input command is case-sensitive. Please use lowercase letters only.\n");
        printf("==============================\n");
        printf("Your choice: ");
        scanf(" %[^\n]%*c", MainCmd);

        if (strcmp(MainCmd, "terminate") == 0)
        {
            clearScreen(); // Clear screen on exit
            printf("Program terminated. All calculations cleared.\n");
            break;
        }

        clearScreen(); // Clear screen before showing new calculation section

        if (strcmp(MainCmd, "circle") == 0)
        {
            printf("Enter the radius of the circle:\t");
            scanf("%lf", &Radius);
            CIRCLE_PROPERTIES(Radius);
        }
        else if (strcmp(MainCmd, "square") == 0)
        {
            printf("Enter the side length of the square:\t");
            scanf("%lf", &L);
            SQUARE_PROPERTIES(L);
        }
        else if (strcmp(MainCmd, "rectangle") == 0)
        {
            printf("Enter the length and width of the rectangle:\n");
            scanf("%lf %lf", &L, &W);
            RECTANGLE_PROPERTIES(L, W);
        }
        else
        {
            printf("COMMAND ERROR!\n");
        }

        printf("\nPress Enter to continue...");
        getchar();
        getchar(); // Wait for user before next screen
        clearScreen();
    }

    return 0;
}
