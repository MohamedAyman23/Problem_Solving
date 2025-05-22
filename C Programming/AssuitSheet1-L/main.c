#include <stdio.h>
#include <string.h>

int are_brothers(char* name1, char* name2) {
    char* last_name1 = strrchr(name1, ' ');
    char* last_name2 = strrchr(name2, ' ');
    if (last_name1 && last_name2) {
        return (strcmp(last_name1 + 1, last_name2 + 1) == 0);
    }
    return 0;
}

int main() {
    char name1[1000];
    char name2[1000];

    // Read the input names
    fgets(name1, sizeof(name1), stdin);
    fgets(name2, sizeof(name2), stdin);

    // Remove trailing newline characters
    name1[strcspn(name1, "\n")] = '\0';
    name2[strcspn(name2, "\n")] = '\0';

    // Check if they are brothers
    if (are_brothers(name1, name2)) {
        printf("ARE Brothers\n");
    } else {
        printf("NOT\n");
    }

    return 0;
}
