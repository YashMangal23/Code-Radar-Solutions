#include <stdio.h>
#include <string.h>

int main() {
    struct student {
        int rollno;
        char name[50];
        float attendance;
    };
    
    struct student stud[1000];
    int n, topScorerIndex = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &stud[i].rollno);
        
        printf("Name: ");
        scanf("%s", stud[i].name);
        
        printf("Attendance: ");
        scanf("%f", &stud[i].attendance);
    }
    
    for (int i = 1; i < n; i++) {
        if (stud[i].attendance > stud[topScorerIndex].attendance) {
            topScorerIndex = i;
        }
    }
    
   
    
    printf("\nTop Scorer:\n");
    printf("Roll Number: %d, ", stud[topScorerIndex].rollno);
    printf("Name: %s, ", stud[topScorerIndex].name);
    printf("Attendance: %.2f\n", stud[topScorerIndex].attendance);
    
    return 0;
}
