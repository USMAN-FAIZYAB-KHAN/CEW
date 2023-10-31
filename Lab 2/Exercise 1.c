/*Write a C program to display the first n odd natural numbers and their sum using for, while and 
do-while loop*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1, sum=0, count=0;
    printf("The first %d odd natural numbers are: ",n);
    // by using while loop
    while(count<n)
    {
        printf("%d ",i);
        sum=sum+i;
        i+=2;
        count++;
    }
    printf("\nThe sum of first %d odd natural numbers is: %d\n",n,sum);
    // by using for loop
    sum=0, count=0;
    printf("\nThe first %d odd natural numbers are: ",n);
    for (i=1; count<n; i+=2)
    {
        printf("%d ",i);
        sum=sum+i;
        count++;
    }
    printf("\nThe sum of first %d odd natural numbers is: %d\n",n,sum);
    // by using do-while loop
    sum=0, count=0, i=1;
    printf("\nThe first %d odd natural numbers are: ",n);
    do {
        printf("%d ",i);
        sum=sum+i;
        i+=2;
        count++;
    } while (count<n);
    printf("\nThe sum of first %d odd natural numbers is: %d\n",n,sum);
    return 0;
}