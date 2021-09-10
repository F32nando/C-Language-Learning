#include<stdio.h>

int main()
{
    int a[4][3] = {{2,3,5},{7,8,3},{1,5,4},{1,5,4}};
    int vectors = sizeof(a)/sizeof(int); //總元素
    int column = sizeof(a[0])/sizeof(int);//column 3
    int row = vectors / column; //row :4

    printf("row:%d\n",row);
    printf("col:%d\n",column);

    int (*pa)[3] = a;
    //int (*pa)[3] = &a[0];
    //int (*pb)[3] = &a[1];
    //奇數指標
    int even=0;
    int *ptotaleven;
    ptotaleven=&even;
    //偶數指標
    int odd=0;
    int *ptotalodd;
    ptotalodd=&odd;

    int i,j;
    int x=0,y=0;
    //先計算 多少個x基數y偶數
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if ( *(*(pa+i)+j) %2 == 1)//是奇數
            {
                x++;    //奇數
            }
            else//是偶數
            {
                y++;   //偶數
            }
        }
    }
    //printf("%d個奇數%d個偶數\n",x,y);


    int k1=1;//跑到第幾個奇數
    //奇數輸出
    for (i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {

            if ( *(*(pa+i)+j) %2 == 1) //是奇數
            {
                *ptotalodd += *(*(pa+i)+j);
                if(k1<x) //還沒跑到奇數 尾
                {
                    printf("%d+",*(*(pa+i)+j));
                }    
                else if(k1==x) //跑到最後一個奇數
                {
                    printf("%d=%d\n",*(*(pa+i)+j),*ptotalodd);
                }
                k1++;
            }

        }
       
    }
    
    
    printf("\n\n");
    
    int k2=1;//跑到第幾個偶數
    //偶數輸出
    for (i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if ( *(*(pa+i)+j)%2==0)
            {
                *ptotaleven += *(*(pa+i)+j);
                
                if(k2<y)//還沒跑到偶數 尾
                {
                    printf("%d+",*(*(pa+i)+j));
                }
                else if (k2==y)//跑到最後一個偶數 尾
                {
                    printf("%d=%d\n",*(*(pa+i)+j),*ptotaleven);
                }
                k2++;
            }
        }
    }
     


    printf("\n基數總和=%d\n",*ptotalodd);
    printf("\n偶數總和=%d\n",*ptotaleven);

    return 0;


}