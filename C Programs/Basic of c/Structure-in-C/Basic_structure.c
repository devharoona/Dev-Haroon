#include <stdio.h>
#include <string.h>
struct Student {
    int sno;
    char sname[50];
    int m1,m2,m3,total;

};
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
// Create an array of student structures
struct Student students[n];

// Input the student records
for (int i = 0; i < n; i++) {
    printf("\nEnter details for student %d:\n", i+1);
    printf("Student Rollno.: ");
    scanf("%d", &students[i].sno);
    printf("Student name: ");
    scanf("%s", students[i].sname);
    printf("Marks in pps marks: ");
    scanf("%d", &students[i].m1);
    printf("Marks in math marks: ");
    scanf("%d", &students[i].m2);
    printf("Marks in physics marks: ");
    scanf("%d", &students[i].m3);

    // Calculate the total marks for each student
    students[i].total = students[i].m1 + students[i].m2 + students[i].m3;
}

// Initialize variables to keep track of the student with maximum total marks
int max_total = students[0].total;
int max_index = 0;

// Iterate through the array of students to find the student with maximum total marks
for (int i = 1; i < n; i++) {
    if (students[i].total > max_total) {
        max_total = students[i].total;
        max_index = i;
    }
}

// Print the student with maximum total marks
printf("\nThe student with maximum total marks is:\n");
printf("Student Rollno.: %d\n", students[max_index].sno);
printf("Student Name: %s\n", students[max_index].sname);
printf("Total Marks: %d\n", students[max_index].total);

return 0;
}