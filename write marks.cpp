//program to write marks
/*
Author: Paul Mungai Njoroge
adm:    CT101/G/23420/24
#*/
	#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *file = fopen("Marks.txts", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter name and marks for student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data stored successfully.\n");
    return 0;
}
