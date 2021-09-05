/*
內容宣告:
以下程式碼由 李翼全 提供

亂數 1-100 取5個 
*/

/* 
#include<stdio.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	
	int i;
	for(i=0;i<5;i++)
	{
	   	int seed = rand()%100 + 1;
		printf("亂數[%d]=%d\n",i+1, seed);		
	}
	

	return 0;
}
 */ 