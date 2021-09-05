/*
內容宣告:
以下程式碼由 李翼全 提供

使用scanf 輸入開始值 和終止值，後執行迴圈數值相加
ex:
開始:1 終止:10 結果:55
開始:1 終止:100 結果:5050
 
*/
/* 
#include <stdio.h>


int main(){

	int start,end;
	
	printf("請輸入起始值:");
	scanf("\n%d",&start); 
	printf("\n你所輸入的起始值為%d\n",start);
	
	printf("請輸入終止值:");
	scanf("\n%d",&end); 
	printf("\n你所輸入的終止值為%d\n",end);
	
	//增加起始終止的數值交換 如果起始大於終止 兩數交換 
	int buffer;
	if(start>end)
	{
		   	buffer = start;
		   	start = end;
		   	end = buffer;
	} 
	
	
	int i, total=0;
	for(i=start;i<=end;i++)
	{
		total+=i;		
	}
	printf("起始值%d+...終止值%d=%d",start, end, total);
	return 0;
}
*/ 