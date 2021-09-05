/*
內容宣告:
以下程式碼由 李翼全 提供

二維陣列  間接表達  存入資料到陣列內 並印出 
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[2][3] ;//間接表達 2列 3欄 陣列 
	int k=10; //存放的k值 
			
	int vectors= sizeof(a)/sizeof(int); //元素個數
	int column = sizeof(a[0])/sizeof(int);//欄數
	int row = vectors / column; //元素除欄數=列數 
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			a[i][j]=k;//放入k值 
			k+=2; //每次增加2 
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);//每欄元素 間隔 
		}
		printf("\n");//每列元素換行 
	}
	
	printf("%d row, %d column, total: %d vectors", row, column,vectors);

	return 0;
}
 
*/