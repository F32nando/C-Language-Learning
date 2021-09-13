#include <stdio.h>

struct person
{
    char id[10];
    char name[20];
    int age;

}data;

int main()
{
    printf("%s","輸入編號:");
    scanf("%s",data.id);
    printf("%s","輸入姓名:");
    scanf("%s",data.name);
    printf("%s","輸入年紀:");
    scanf("%d",&data.age);
    
    printf("\n");
    printf("編號:%s\n",data.id);
    printf("姓名:%s\n",data.name);
    printf("年紀:%d\n",data.age);

}