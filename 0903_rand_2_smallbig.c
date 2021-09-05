/*
內容宣告:
以下程式碼由 李翼全 提供

亂數 1-100 取20個 由小排列到大
*/


#include<stdio.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	int seedno=20;
	int a[seedno];
	int i;
	for(i=0;i<seedno;i++)
	{
	   	int seed = rand()%100 + 1;
	   	a[i] = seed;
		printf("亂數[%d]=%d\n",i+1, a[i]);		
	}
	//bubble sort
  	for (int i = 0; i < seedno; ++i)
	{
    	for (int j = 0; j < i; ++j)
		{
      		if (a[j] > a[i])
			{
        		int temp = a[j];
        		a[j] = a[i];
        		a[i] = temp;
      		}
    	}
  	}

	for(i=0;i<seedno;i++)
	{
		printf("亂數[%d]=%d\n",i+1, a[i]);		
	}



	return 0;
}

