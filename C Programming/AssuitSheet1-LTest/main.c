#include <stdio.h>
#include <string.h>
int Are_Brothers(char *name1, char *name2);
int main()
{
    char name1[1000];
    char name2[1000];
    fgets(name1, sizeof(name1), stdin);
    fgets(name2, sizeof(name1), stdin);
    // Remove the "\n" char from the string we got from the fgets
    // using the function strcspn() which specifies the location of the char we want to delete
    // strcspn specifies the index of the char
    name1[strcspn(name1, "\n")] = '\0';
    name2[strcspn(name2, "\n")] = '\0';
    if(Are_Brothers(name1, name2))
        printf("ARE Brothers\n");
    else
        printf("NOT\n");

    return 0;
}
int Are_Brothers(char *name1, char *name2)
{
    char *lastName1 = strrchr(name1, ' ');
    char *lastName2 = strrchr(name2, ' ');
    if(lastName1 && lastName2)
        return(strcmp(lastName1 + 1, lastName2 + 1) == 0);
    return 0;
}
