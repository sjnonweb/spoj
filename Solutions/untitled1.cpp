#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <process.h>


int main()
{
    FILE *fp;
    char dec[10];
    printf("\nEnter a number in Decimal\n");
    gets(dec);
    fp = fopen("testFile.txt", "w");
    if(fp==NULL)
    {
        printf("\nCant open the file");
        exit(1);
    }
    fputs(dec,fp);
    fputs("\n",fp);

    fclose(fp);

}
