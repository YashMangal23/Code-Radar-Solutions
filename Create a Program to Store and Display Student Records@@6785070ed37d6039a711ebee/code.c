#include<stdio.h>
int main()
{
    struct student{
    int rollno;
    char name[50];
    float attendence;
};
struct student stud[1000];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&stud[i].rollno);
    scanf("%s",&stud[i].name);
    scanf("%f",&stud[i].attendence);
}
for(int i=0;i<n;i++){
    printf("Roll Number: , Name: , Marks: %d\n",stud[i].rollno,stud[i].name,&stud[i].attendence);
    
}
return 0;
}
