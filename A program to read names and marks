
#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    FILE *file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    for (int i = 0; i < 5; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %f", students[i].name, &students[i].marks);
        fprintf(file, "%s %.2f\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data saved successfully.\n");
    return 0;
}

    
