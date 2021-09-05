/*
內容宣告:
以下程式碼由 李翼全 提供

字串連接 

輸入三筆 字串 然後每個字串連接 中間以空白間隔 
*/


#include<stdio.h>
#include <string.h>
/*
int main()
{

	char src[20];  //來源字串 
	char target[100]; //目標字串 
	int i;
	for(i=0;i<3;i++)
	{
		printf("請輸入字串: ");
	   	gets(src); //輸入的放進src內 
	   	
	   	if(i==0) //第一筆 先把他複製到 目標字串內 
		{
		   	strcpy(target,src);
		}
		else //第二筆以後 直接 添加黏上去 字串內 
		{
			strcat(target," "); //先黏 空白 
			strcat(target,src); //在黏 來源字串 
		}
	}
	printf("%s",target);	
	
			
	return 0;
}
 */