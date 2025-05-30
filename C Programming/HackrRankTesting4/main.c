#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    fflush(stdin);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    fflush(stdin);
    total_number_of_books = (int *)calloc(total_number_of_shelves, sizeof(int));
    total_number_of_pages = (int **)calloc(total_number_of_shelves, sizeof(int *));
    int i = 0;
    for(i = 0; i < total_number_of_shelves; i++)
    {
        total_number_of_pages[i] = (int *)calloc(1100, sizeof(int));
    }

/* //this comments are another solution to the problem //

    total_number_of_books = (int*)malloc(sizeof(int)*total_number_of_shelves);
    total_number_of_pages = (int**)malloc(sizeof(int*)*total_number_of_shelves);

    for(int i=0; i<total_number_of_shelves; i++){
        total_number_of_books[i]=0;
        total_number_of_pages[i]=(int*)malloc(sizeof(int));
    }
*/
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
/*            *(total_number_of_books+x)+=1;
            *(total_number_of_pages+x)=realloc(*(total_number_of_pages+x), *(total_number_of_books+x)*sizeof(int));
            *(*(total_number_of_pages+x)+*(total_number_of_books+x)-1)=y;
*/
            total_number_of_pages[x][total_number_of_books[x]] = y;
            (total_number_of_books[x])++;

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            fflush(stdin);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            fflush(stdin);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }

    if (total_number_of_pages) {
        free(total_number_of_pages);
    }

    return 0;
}
