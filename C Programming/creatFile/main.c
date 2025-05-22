#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *myfile = NULL;
    unsigned int i = 0;
    unsigned int x = 0x11;
    myfile = fopen("test.text", "W");
    if(NULL != myfile)
    {
        for(i = 0; i < 6; i++)
        {
            printf(myfile, "the value of num %u is = 0x%x\n", i + 1, x);
        }

    }

    fclose(myfile);23غت
    return 0;
}
