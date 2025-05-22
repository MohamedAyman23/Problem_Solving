#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int distinct_size(const char* word) {
    static char *unique_words;
    int size = strlen(word);
    int count = 0;

    unique_words = malloc(size * sizeof(char));
    for (int i = 0; i < size; i++) {
        int is_distinct = 1;
        for (int j = 0; j < strlen(unique_words); j++) {
            if (*(word + i) == unique_words[j]){
                is_distinct = 0;
                break;
            }
        }
        if (is_distinct)
            unique_words[count++] = *(word + i);
    }
    return count;
}

int compare_lex(const char* a, const char* b) {
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        if (a[i] > b[i]) return 1;
        else if (a[i] < b[i]) return -1;
    }
    return 0;
}

int compare_size(int type, const char* a, const char* b) {
    int size_a = (type == 1) ? strlen(a) : distinct_size(a);
    int size_b = (type == 1) ? strlen(b) : distinct_size(b);
    if (size_a > size_b) return 1;
    else if (size_a < size_b) return -1;
    return 0;
}

int lexicographic_sort(const char *a, const char *b) {
    int comp = compare_lex(a, b);
    if (comp == 1) return 1;
    return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    int comp = compare_lex(a, b);
    if (comp == -1) return 1;
    return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int comp = compare_size(2, a, b);
    if (comp == 0) return lexicographic_sort(a, b);
    if (comp == 1) return 1;
    return 0;
}

int sort_by_length(const char* a, const char* b) {
    int comp = compare_size(1, a, b);
    if (comp == 0) return lexicographic_sort(a, b);
    if (comp == 1) return 1;
    return 0;
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)){
    for (int i = 0; i < len-1; i++) {
        int val = cmp_func(*(arr + i), *(arr + (i + 1)));
        if (val == 1) {
            char *temp = *(arr + i);
            *(arr + i) = *(arr + (i + 1));
            *(arr + (i + 1)) = temp;
            i = -1;
        }
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}
