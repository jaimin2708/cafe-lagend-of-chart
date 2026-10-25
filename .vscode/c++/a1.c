#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char *buffer;
    if ((buffer = (char *)malloc(7)) == NULL)
    {
        printf("malloc failed.\n");
        exit(1);
    }
    strcpy(buffer, "ANAND");
    printf("\nBuffer contains: %s \n ", buffer);
    if ((buffer = (char *)realloc(buffer, 15)) == NULL)
    {
        printf("Reallocation failed. \n");
        exit(1);
    }
    printf("\nBuffer size modified. \n");
    printf("\nBuffer still contains: %s \n", buffer);
    strcpy(buffer,"AHMEDABAD");
    printf("\nBuffer now contains: %s \n",buffer);
free(buffer);
}