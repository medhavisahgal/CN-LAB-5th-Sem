#include <stdio.h>
#include <stdlib.h>

struct dob
{
    int day;
    int month;
    int year;
};

struct student_info
{
    int roll_no;
    char name[50];
    float CGPA;
    struct dob age;
};

void func1(struct student_info student)
{
    printf("Roll No: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("CGPA: %.2f\n", student.CGPA);
    printf("DOB: %02d-%02d-%d\n", student.age.day, student.age.month, student.age.year);
}

void func2(struct student_info *student)
{
    printf("Roll No: %d\n", student->roll_no);
    printf("Name: %s\n", student->name);
    printf("CGPA: %.2f\n", student->CGPA);
    printf("DOB: %02d-%02d-%d\n", student->age.day, student->age.month, student->age.year);
}

int main()
{
    struct student_info student1 = {1, "John Doe", 9.5, {10, 10, 2000}};
    struct student_info student2 = {2, "James Oliver", 9.0, {10, 10, 2001}};
    func1(student1);
    func2(&student2);
    return 0;
}