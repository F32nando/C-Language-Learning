/*
內容宣告:
以下程式碼由 李翼全 提供

使用外圈for(;;)和內圈for(;;)重新設計一張9*9乘法表 
*/

/*
#include <stdio.h>

int main()
{

	//999乘法表
	printf("9*9乘法表\n");
	int i=1,j=1;
	int total=0;
	
	for(;;)
	{
		if(i<=9)
		{
			j=1;
			for(;;)
			{
				if(j<=9)
				{
					total=i*j;
					printf("%d*%d=%d\t",i,j,total);
					
				}
				else
				{
					printf("\n");
					break;
					
				}
				j++;
			}
			
			i++;
		}
		else
		{
			break;
		}
		
	
	} 
	
	return 0;
}

*/