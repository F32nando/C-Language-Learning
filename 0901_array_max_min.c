/*
內容宣告:
以下程式碼由 李翼全 提供

練習題

一維陣列找最大值
1.令max=0 當預設參考值
2.採用for和if敘述找出最大值

a[]={34,67,99,9,11}
max = 0  max<a[i]-->max=a[i]; 

i=0時 a[0]=34   max=0  max = (max>a[0]? max: a[0])  max-->34
i=1時 a[1]=67   max=34 ......    max-->67  
i=2時 a[2]=99   max=67 .......   max-->99
i=3時 a[3]=9    max=99 .......   max-->max
i=4時 a[4]=11   max=99 .......   max-->max


一維陣列找最小值 
1.令min=b陣列第一元素當參考值
2.採用for和if敘述找出最大值
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[] = {34,67,99,9,11,42};
	int len = sizeof(a)/sizeof(int);
	
	//找極大值 
	int i,max=a[0];//可以設第一元素當參考 也可以用0參考 
	for(i=0;i<len;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		//max = (max<a[i]? a[i]: max) ;
		
		printf("a第%d次計算a[%d]=%d \tmax值為%d\n",i,i,a[i],max);
	}
	printf("\n");
	
	

	
	//找極小值
 	int j,min=a[0]; //令min=a陣列第一元素當參考值 
	for(j=0;j<len;j++)
	{
		if(min>a[j])
		{
			min=a[j];
		}
		//min = (min>a[j]? a[j]:min ) ;
		printf("a第%d次計算a[%d]=%d \tmin值為%d\n",j,j,a[j],min);
	}
		
}
 
*/