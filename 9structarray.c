#include <stdio.h>
#define sk 2

struct cat
{
    int a;
    int d;
}b[sk];


int main()
{
    b[0].a = 10;
    b[0].d = 20;
    b[1].a = 30;
    b[1].d = 40;

    printf("%d\n",b[0].a);
    printf("%d\n",b[0].d);
    printf("%d\n",b[1].a);
    printf("%d\n",b[1].d);


    int t=10;
    int i=0;
    for(i=0;i<sk;i++)
    {
        b[i].a =t;
        t = t+10;
        b[i].d = t;
        t = t+10;
    }

    for(i=0;i<sk;i++)
    {
        printf("%d\n",b[i].a);
        printf("%d\n",b[i].d);

    }

    int p=1;
    for(i=0;i<sk;i++)
    {
        printf("輸入第[%d]個元素",p);
        scanf("%d",&b[i].a);
        p++;
        printf("輸入第[%d]個元素",p);
        scanf("%d",&b[i].d);
        p++;
    }

    for(i=0;i<sk;i++)
    {
        printf("%d\n",b[i].a);
        printf("%d\n",b[i].d);

    }

}