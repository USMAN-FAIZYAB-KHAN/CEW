/* Write a C program to add two distances in inch-feet system using structures.*/
#include <stdio.h>
// declare a structure to store distance
struct Distance {
    int feet;
    float inch;
};
int main() {
    // declaring variables of Distance type
    struct Distance d1, d2, d3;
    // getting input from user
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
    // adding feet
    d3.feet = d1.feet + d2.feet;
    // adding inches
    d3.inch = d1.inch + d2.inch;
    // if inch exceeds 12, changing it to feet
    if (d3.inch > 12) {
        d3.inch -= 12;
        d3.feet++;
    }
    // printing result
    printf("\nSum of distances = %d feet %.1f inches", d3.feet, d3.inch);
    return 0;
}