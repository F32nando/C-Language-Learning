/*
內容宣告:
以下程式碼由 李翼全 提供

array 讀值 
 
*/
#include <stdio.h>


int main(){
	int a[]={12,34,5,6,78,9};
	int len_of_a = sizeof(a) / sizeof(int); 
	
	//正迴圈輸出陣列值 
	int i;
	for(i=0;i<len_of_a;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
	printf("\n");
	
	//逆迴圈輸出陣列值 
	int j;
	for(j=len_of_a-1;j>=0;j--) //注意j=長度-1因為長度比空間座標多1 
	{
		printf("a[%d]=%d\t",j,a[j]);
	}
	printf("\n");

	return 0;
}
