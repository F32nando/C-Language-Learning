/*
內容宣告:
以下程式碼由 李翼全 提供

字元二維陣列  


*/


#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
	int num,name_length;
	printf("請問你要輸入幾個名字:");
	scanf("%d",&num);
	printf("請問最長的名字多少字元:");
	scanf("%d",&name_length);
	
	char a[num][name_length];
	int i,input=1;
	for(i=0;i<num;i++)
	{
		printf("請輸入第%d 個名字:",input++);
		scanf("\n%s",a[i]);  //陣列 以整體輸入字串 不需要&a[i]

	}

	int vectors = sizeof(a)/sizeof(char); //元素個數
	int column = sizeof(a[0])/sizeof(char); // 
	int row = vectors/column;
	
	for(i=0;i<row;i++)
	{
	
		printf("%s\n",a[i]);
	
	}

	return 0;
}
 
*/