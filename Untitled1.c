#include <stdio.h>
 struct Student {
    int rollNo;
    char name[50];
    float marks;
 };
 int main() {
    struct Student s[3] = {
        {101, "Alice", 85.5},
        {102, "Bob", 90.0},
        {103, "Charlie", 78.5}
    };
    for (int i = 0; i < 3; i++) {
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }
    return 0
}
