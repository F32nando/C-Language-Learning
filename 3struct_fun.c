#include <stdio.h>

void input();
void show();
void exitfun();


struct person
{
    char id[10];
    char name[20];
    int age;

}data;

int main()
{
    input();
    return 0;
}

void input()
{
    printf("%s","輸入編號:");
    scanf("%s",data.id); //字串不需要 &
    printf("%s","輸入姓名:");
    scanf("%s",data.name); //字串不需要 &
    printf("%s","輸入年紀:");
    scanf("%d",&data.age);
    
    printf("\n");
    show();
}

void show()
{
    printf("編號:%s\n",data.id);
    printf("姓名:%s\n",data.name);
    printf("年紀:%d\n",data.age);
    exitfun();
}



void exitfun()
{
    int k;
	printf("請選擇(1)重新執行(2)完全結束:");
    scanf("%d", &k);
    

    switch(k)
    {
        case 1:
        {
            printf("重新執行!\n\n");
            input();
            break;
        }
        case 2:
        {
            break;
        }
    }
}