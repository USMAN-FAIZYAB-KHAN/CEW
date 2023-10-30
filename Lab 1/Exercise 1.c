/*Write a C program that accepts an employee's ID, total worked hours in a month and
the amount received per hour. Print the ID and salary (with two decimal places) of the
employee for a particular month.*/
#include <stdio.h>
int main() {
    // declaring all the variables
    int employeeId;
    float hoursWorked;
    float hourlyRate;
    float employeeSalary;
    // getting all the values from the user
    printf("Enter employee ID: ");
    scanf("%d", &employeeId);
    printf("Enter hours worked: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly rate: $");
    scanf("%f", &hourlyRate);
    // calculating the employee salary
    employeeSalary = hourlyRate * hoursWorked;
    // displaying employee salary along with employee id
    printf("Employee ID: %d\n", employeeId);
    printf("Employee Salary: %f\n", employeeSalary);
    return 0;
}
