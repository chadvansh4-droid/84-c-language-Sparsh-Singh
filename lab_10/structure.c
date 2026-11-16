#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s1;

    s1.roll = 84;
    sprintf(s1.name, "sparsh");
    s1.marks = 85.5;

    printf("Student Details\n");
    printf("Roll Number = %d\n", s1.roll);
    printf("Name = %s\n", s1.name);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}
