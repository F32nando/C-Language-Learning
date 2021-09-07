#include<stdio.h>
int main()
{   int b;
    char k='a';
    void *pk;
    pk = &k;


    printf("%c\n",*(char*)pk);
    
    *(char*)pk = 'z';
    printf("%c\n",*(char*)pk);
    printf("%c\n",k);

    int new_value =99;
    pk = &new_value;    //指標指向位置
    printf("%d\n",*(int*)pk);

    *(int*)pk = 120;
    printf("%d\n",new_value);

    return 1;

}