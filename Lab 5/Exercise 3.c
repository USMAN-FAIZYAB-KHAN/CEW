// Implement a student database system using a file. Include features to add, delete, modify,
// and display student records.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int age;
    int roll;
    float marks;
} Student;

void addStudent(const char *filename, Student *student);

void displayStudents(const char *filename);

int main() {
    const char *filename = "students.txt";
    Student student;
    int choice;
    do {
        printf("\nStudent Record Management\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student name: ");
                scanf("%s", student.name);
                printf("Enter student age: ");
                scanf("%d", &student.age);
                printf("Enter student roll number: ");
                scanf("%d", &student.roll);
                printf("Enter student marks: ");
                scanf("%f", &student.marks);
                addStudent(filename, &student);
                printf("Student record added.\n");
                break;

            case 2:
                displayStudents(filename);
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}

void addStudent(const char *filename, Student *student) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(file, "%s, %d, %d, %.2f\n", student->name, student->age, student->roll, student->marks);
    fclose(file);
}

void displayStudents(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    char buffer[100];
    printf("Name, Age, Roll, Marks\n\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
}

