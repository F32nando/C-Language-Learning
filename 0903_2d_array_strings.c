/*
內容宣告:
以下程式碼由 李翼全 提供

字元二維陣列  


*/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char s[][20] = {"程式設計","美工設計","網頁設計","多媒體","系統設計"};
	int vectors = sizeof(s)/sizeof(char); //元素個數
	int column = sizeof(s[0])/sizeof(char); // 
	int row = vectors/column;

	int i;
	for(i=0;i<row;i++)
	{
		printf("%s\n",s[i]);		
	}

	
	return 0;
}
 
*/