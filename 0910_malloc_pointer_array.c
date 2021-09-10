#include<stdlib.h>
#include<stdio.h>

int main()
{
    int size=5;
    int *p = (int*)malloc(size*sizeof(int));
    
    p[0]=12;
    p[1]=13;
    p[2]=15;
    p[3]=19;
    p[4]=23;
    
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("%d\n",p[i]);
    }

    printf("\n");
    p[5]=1283;    //動態配置記憶體後 即使一開始沒有配置足夠空間，隨後增加到p[6]時也可以


    int j=0;
    for(j=0;j<size+1;j++)
    {
        printf("%d\n",p[j]);
    }




    return 0;
}