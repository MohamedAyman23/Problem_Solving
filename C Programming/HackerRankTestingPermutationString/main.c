#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char **s,int i, int j)
{
    char *temp = s[i];
    s[i]= s[j];
    s[j] = temp;
}
void reverse(char **s, int start, int end )
{
    while(start < end)
    {
        swap(s, start++,end--);
    }
}
/*

Here we did two things Back Tracking and Brute Force.

Back Tracking means if we go back and take another possible route in a tree.
Brute Force means finding out all possible permutations.
*/
int next_permutation(int n, char **s)
{
       for(int i=n-2;i>-1;i--)
        {
            if(strcmp(s[i+1],s[i])>0)
            {
                for(int j=n-1;j>i;j--)
                {
                    if(strcmp(s[j],s[i])>0)
                    {
                        swap(s,i,j);
                        reverse(s,i+1,n-1);
                        return 1;
                    }
                }
            }
        }
    return 0;
}
int main()
{
    char **s;
	int n;
	scanf("%d", &n);
	s = (char**)calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = (char*)calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
    return 0;
}
