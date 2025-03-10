#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int rollno;
    float marks;
    char name[50];
};

int main() {
    struct Student students[MAX_STUDENTS];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll No.: ");
        scanf("%d", &students[i].rollno);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("Name: ");
        scanf("%s", students[i].name);
    }

    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No.: %d\n", students[i].rollno);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Name: %s\n", students[i].name);
        printf("\n");
    }

    return 0;
}
