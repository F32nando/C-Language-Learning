/*
內容宣告:
以下程式碼由 李翼全 提供

亂數 1-100 取10個  計算 最大值 和最小值 
*/
/*

#include<stdio.h>
#include <time.h>

int main()
{
	//產生亂數 
	srand((unsigned)time(NULL));
	int a[10];
	int i;
	//做10次亂數 
	for(i=0;i<10;i++)
	{
	   	int seed = rand()%100 + 1; //1~100取亂數 
	   	a[i] = seed; //亂數存入 陣列內 
		printf("亂數[%d]=%d\n",i+1, a[i]);		
	}
	
	
	int max = a[0];  //預設 最大值 =第一個亂數 
	int min = a[0];  //預設 最小值 =第一個亂數
	for(i=0;i<10;i++)
	{
		if(max>a[i]) //跟亂數比較 max比他大 max 不變 
		{
			max = max;
		}
		else 
		{
			max = a[i]; //max <=a[i]  max變成a[i] 
		}
		
		if(min<a[i]) //跟亂數比較 min比他小 min 不變 
		{
			min = min;
		}
		else 
		{
			min = a[i]; //min >= a[i]  min 變成a[i]
		}
	}

	printf("最大值=%d 最小值=%d",max, min);
	return 0;
}
*/