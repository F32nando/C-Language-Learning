/*
已知無別名結構:

struct theory
{
    char id[10];
    char name[20];
    char birth[20];
    char blood[10];
    char school[30];

}
使用 scanf()將資料輸入實體結構成員，
之後再用結構指標 輸出5個欄位資料

*/




#include <stdio.h>
#include <string.h>

struct theory
{
    char id[10];
    char name[20];
    char birth[20];
    char blood[10];
    char school[30];

}; //還沒有給別名

int main()
{
	struct theory po;//在主程式補給他別名
		
    printf("請輸入編號:");
    scanf("%s",po.id); //字串連續記憶體 所以不需要&
	printf("請輸入姓名:");
    scanf("%s",po.name);//字串連續記憶體 所以不需要&
    printf("請輸入生日:");
    scanf("%s",po.birth);
    printf("請輸入血型:");
    scanf("%s",po.blood);
    printf("請輸入學校:");
    scanf("%s",po.school);
		
    
    struct theory *pt;
    pt = &po;

    printf("%s\n",pt->id);
    printf("%s\n",pt->name);
    printf("%s\n",pt->birth);
    printf("%s\n",pt->blood);
    printf("%s\n",pt->school);
    return 0;

}