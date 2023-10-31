/* Write a C program to make the following pattern as a pyramid with an asterisk.
* 
* * 
* * * 
* * * *
*/
#include <stdio.h>
int main() {
    for (int i=1; i<=4; i++) {
        for (int j=1; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}