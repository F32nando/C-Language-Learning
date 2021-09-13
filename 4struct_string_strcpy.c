#include <stdio.h>

struct person
{
    char id[10];

}bob;

int main()
{
    strcpy(bob.id, "P1001");
    printf("bob的id: %s",bob.id);
    return 0;

}