/*
內容宣告:
以下程式碼由 李翼全 提供

字元二維陣列  
已知資料:  程式設計","美工設計","網頁設計","多媒體","系統設計"
試著寫 一支查詢程式 由使用者輸入 科目名稱  後 向來源資料查詢
此科目是否存在

存在: 輸出 "有此課目存在"
不存在: 輸出 "無此課目存在" 
*/

/*

#include<stdio.h>
#include <string.h>

int main()
{
	char s[][20] = {"程式設計","美工設計","繪圖設計","網頁設計","系統設計"};
	int vectors = sizeof(s)/sizeof(char); //元素個數
	int column = sizeof(s[0])/sizeof(char); // 
	int row = vectors/column;
	char q[2][20];

	for(;;)
	{
		printf("請輸入欲查詢課目名稱:");
	   	scanf("%s",q[0]); //陣列 以整體輸入字串 不需要&q[0]
	    printf("你所輸入的內容為:[ %s ]\n",q[0]);
	    
		int i,cmp_result;
	
	   	for(i=0;i<row;i++)
		{
			cmp_result = strcmp(q[0],s[i]);  //字串比對函數 -1 or 0 
			printf("s[%d]=%s\t",i,s[i]);  //印出s[i]的值 除錯用 
			printf("比較結果=%d\n",cmp_result);
		}
		if(cmp_result==0)
		{
			printf("\n有此課目存在，系統中斷執行");
			break;			
		}
		else
		{
			printf("\n無此課目存在，可繼續查詢\n");
		}

	}	
	return 0;
}

*/
 
