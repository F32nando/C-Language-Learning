#include <stdio.h>
/*
內容宣告:
以下程式碼由 李翼全 提供

define 功能  
*/
/*
#define red    1
#define green  2
#define blue 3


int main(){

	int color_opt;
	
	for(;;){
	    printf("請輸入(1)紅色(2)綠色(3)藍色:");
	   	scanf("%d",&color_opt);	
	   	
	   	switch (color_opt)
	   	{
		   	case red:
			{
				printf("%s", "你選擇的是紅色");
				break;//跳脫switch   
			}
			case green:
			{
				printf("%s", "你選擇的是綠色");
				break;//跳脫switch				
			}
			case blue:
			{
				printf("%s", "你選擇的是藍色");
				break;//跳脫switch
			}
			default:
			{
				printf("你輸入的是%d選擇錯誤\n",color_opt);
				continue;//直接繼續 沒有跑最後一個break回到上面的for區塊	
			}
		}
		break;

	
	}

	return 0;
}
*/
