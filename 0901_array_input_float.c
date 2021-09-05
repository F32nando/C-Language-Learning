/*
內容宣告:
以下程式碼由 李翼全 提供

練習題
陣列元素輸入
"以整數為例
(1)先將值從MS-DOS送入　浮點數 
 
(2)再從純變數將資料放入陣列元素中

*/
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{

	float data[5];//浮點數陣列 
	int i;
	float key_val=0;//讀入的浮點數 
	int len = sizeof(data)/sizeof(float);//陣列長度
	
	for(i=0;i<len;i++)
	{
		printf("輸入第 %d 個浮點數",(i+1));//+1是有放就要從1開始算 
		scanf("\n%f",&key_val); //連續輸入記得\n 
		data[i]=key_val;//浮點數放入data[i]陣列內 
	} 
	int j;
	for(j=0;j<len;j+=2)//這邊做 輸出偶數位 並取至小數點第一位 
	{
		printf("data[%d]=%.1f\n",j,data[j]);//印出陣列元素，偶數位置 
	}
		
}
 
*/
