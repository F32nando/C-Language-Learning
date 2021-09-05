/*
內容宣告:
以下程式碼由 李翼全 提供

練習題 
判斷面試是否過關
設計一個面試程式，由使用者輸入 口試 面試 筆試
三個成績判斷是否及格

及格分數:
口試75\面試65 兩者其中一項及格 即可合格
筆試80

三者成立輸出  過關
三成不成立輸出 不過關 

*/

/* 
#include <stdio.h>

int main(){
	//輸入口試成績 面試成績 筆試成績: 
	int input1, input2, input3;
	printf("請輸入口試成績 面試成績 筆試成績:");
	scanf("\n%d%d%d",&input1,&input2,&input3); 

	if((input1>=75||input2>=65)&& input3>=80)
	{
		printf("成績通過，過關");	
	}
	else
	{
		printf("成績不通過，不過關");		
	}	
		
	return 0;
}


*/ 