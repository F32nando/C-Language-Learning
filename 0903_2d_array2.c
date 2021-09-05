/*
內容宣告:
以下程式碼由 李翼全 提供

二維陣列  間接表達 並 印出所有元素內容 
*/
/*

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[2][3] ;//間接表達 2列 3欄 陣列 
	a[0][0]=10; 
	a[0][1]=11;
	a[0][2]=12;
	a[1][0]=13;
	a[1][1]=14;
	a[1][2]=15;
	
		
	int vectors= sizeof(a)/sizeof(int); //元素個數
	int column = sizeof(a[0])/sizeof(int);//欄數
	int row = vectors / column; //元素除欄數=列數 
	int i,j;
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