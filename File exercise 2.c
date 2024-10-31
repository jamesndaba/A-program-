//a file

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100


void write_sentence_to_file() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char sentence[MAX_LENGTH + 1];
    printf("Enter a sentence (up to %d characters): ", MAX_LENGTH);
    fgets(sentence, MAX_LENGTH + 1, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence written to data.txt\n");
}

void read_from_file() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char ch;
    printf("Contents of data.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}


void append_sentence_to_file() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char sentence[MAX_LENGTH + 1];
    printf("Enter another sentence to append (up to %d characters): ", MAX_LENGTH);
    fgets(sentence, MAX_LENGTH + 1, stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence appended to data.txt\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Write sentence to file\n");
        printf("2. Read from file\n");
        printf("3. Append sentence to file\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar();  

        switch (choice) {
            case 1:
                write_sentence_to_file();
                break;
            case 2:
                read_from_file();
                break;
            case 3:
                append_sentence_to_file();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}

