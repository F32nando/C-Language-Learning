/*

char* 函數名稱()
{


    return 動態陣列指標;
}


*/


#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char* strfun();

int main()
{
    char *t = strfun();
    printf("%s\n",t);

    return 0;


}

char* strfun()
{

    char k[12] = "oracle java";
    char d[15] = " development";
    char *result = (char*)malloc(sizeof(char));

    strcpy(result, k);
    strcat(result, d);
    
    return result;

}    