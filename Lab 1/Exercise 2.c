/*Write a C program that takes the height and width of a rectangle as an input from user
and compute the perimeter and area of a rectangle.*/
#include <stdio.h>
int main() {
    // declaring all the variables
    float height;
    float width;
    float perimeter;
    float area;
    // getting the value of width and height input from the user
    printf("Enter height of rectangle (in cm): ");
    scanf("%f", &height);
    printf("Enter width of rectangle (in cm): ");
    scanf("%f", &width);
    // calculating area and perimeter of the rectangle
    perimeter = 2 * (width + height);
    area = width * height;
    // displaying the area and perimeter of the rectangle
    printf("Perimeter: %.2f cm\n", perimeter);
    printf("Area: %.2f cm**2\n", area);
    return 0;
}