/*
內容宣告:
以下程式碼由 李翼全 提供

二維陣列  
使用scanfgj 輸入6個元素進入2維陣列
再使用while迴圈 輸出6個元素內容 

*/

/*
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
	int vectors, row, column;
	printf("請輸入元素個數:");
	scanf("\n%d",&vectors);
	printf("請輸入row數:");
	scanf("\n%d",&row);
	//printf("請輸入column數:");
	//scanf("\n%d",&column);
	
	if(vectors%row!=0)
	{
	    column = (int)(vectors/row)+1;	
	}
	
	printf("根據判斷，最適合column數=%d",column);		
	//int vectors = 10; //元素個數
	//int row = 2; // 
	//int column = vectors/row;
	
	
	int a[row][column] ;//間接表達陣列 
	//輸入 
	int i,j,element=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			element++;
			if(element<=vectors)
			{
				printf("請輸入第%d 個元素:",element);
			    scanf("\n%d",&a[i][j]);
			}else
			{
				printf("第%d元素不用輸入 自動補-999\n",element);
				a[i][j]=-999;
			}
		}
	}
	//輸出 
	i=0;
	while(i<row)
	{
		j=0;
		while(j<column)
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);//每欄元素 間隔
			j++; 
		}
		printf("\n");//每列元素換行
		i++; 
	}
	
	//printf("%d row, %d column, total: %d vectors", row, column,vectors);

	return 0;
}
 
*/