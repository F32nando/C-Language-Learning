#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char *r = (char*)malloc(sizeof(char));
    strcpy(r, "frank yih chyuan lee");
    int len = strlen(r);

    printf("%d\n",len);

    return 0;
}