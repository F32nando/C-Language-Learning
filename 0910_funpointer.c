#include<stdio.h>

void ca3(int pa);

int main()
{
    int a;
    a=50;
    ca3(a);

    return 0;.

}

void ca3(int pa)
{
    int *pb = &pa;
    printf("%d",*pb); //回去取a的值
}   