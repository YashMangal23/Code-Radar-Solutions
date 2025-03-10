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

    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {


    
        scanf("%d", &students[i].rollno);

        
        scanf("%f", &students[i].marks);

        
        scanf("%s", students[i].name);
    }

    
    for (int i = 0; i < n; i++) {
        printf("Roll Number: , Name: , Marks:  %d\n", students[i].rollno,students[i].marks,students[i].name);
        
        printf("\n");
    }

    return 0;
}
