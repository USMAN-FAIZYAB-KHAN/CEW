/*Write a C program to accept the height of a person in centimeters and categorize the
person according to his height. (Height < 150cm : Dwarf, Height=150cm : Average,
Height>=165cm : Tall).*/
#include <stdio.h>
int main() {
    // declaring the variable for height
    float height;
    // getting input from the user
    printf("Enter height (in cm): ");
    scanf("%f", &height);
    // determining the category of the person using conditionals
    if (height >= 165) {
        printf("Tall");
    } 
    else if (height >= 150) {
        printf("Average");
    } 
    else {
        printf("Dwarf");
    }
    return 0;
}