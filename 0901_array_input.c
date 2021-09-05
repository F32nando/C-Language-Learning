/*
內容宣告:
以下程式碼由 李翼全 提供

練習題
陣列元素輸入
"以整數為例
(1)先將值從MS-DOS送入純變數 
 
(2)再從純變數將資料放入陣列元素中

*/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{

	int data[5];//整數陣列 
	int i;
	int key_val=0;//讀入的整數值 
	int len = sizeof(data)/sizeof(int);//陣列長度
	
	for(i=0;i<len;i++)
	{
		printf("輸入第 %d 個元素",(i+1));//+1是有放就要從1開始算 
		scanf("\n%d",&key_val); //連續輸入記得\n 
		data[i]=key_val;//數值放入data[i]陣列內
	} 
	int j;
	for(j=0;j<len;j++)
	{
		printf("data[%d]=%d\n",j,data[j]);//印出陣列元素 
	}
		
}
 
*/