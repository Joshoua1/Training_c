#include <stdio.h>

struct Student {
    int marks;
    int rollNo;
    char name[100];
};

void printStudentDetails(const struct Student* student) {
    printf("Name is: %s\n", student->name);
    printf("Roll No. is: %d\n", student->rollNo);
    printf("Marks are: %d\n", student->marks);
}

int main() {
    struct Student student1, student2;
    
    // Read input for student 1
    scanf("%d %d %[^\n]", &student1.marks, &student1.rollNo, student1.name);
    
    // Read input for student 2
    scanf("%d %d %[^\n]", &student2.marks, &student2.rollNo, student2.name);
    
    // Print details of student 1
    printStudentDetails(&student1);
    printf("\n");
    
    // Print details of student 2
    printStudentDetails(&student2);
    
    return 0;
}