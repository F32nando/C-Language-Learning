/*
內容宣告:
以下程式碼由 李翼全 提供

練習題
陣列元素輸入
"以整數為例
(1)先將值從MS-DOS送入　純字元 
 
(2)再從純變數將資料放入陣列元素中

*/
/* 
#include<stdio.h>
#include<stdlib.h>

int main()
{

	char data[5];//字元陣列 
	int i;
	char key_val=0;//讀入的字元 
	int len = sizeof(data)/sizeof(char);//陣列長度
	
	for(i=0;i<len;i++)
	{
		printf("輸入第 %d 個字元",(i+1));//+1是有放就要從1開始算 
		scanf("\n%c",&key_val); //連續輸入記得\n 
		data[i]=key_val;//字元放入data[i]陣列內 
	} 
	int j;
	for(j=0;j<len;j++)
	{
		printf("data[%d]=%c\n",j,data[j]);//印出陣列元素 
	}
		
}
*/ 
 
