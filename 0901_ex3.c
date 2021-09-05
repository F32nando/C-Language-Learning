/*
內容宣告:
以下程式碼由 李翼全 提供

練習題 

BMI計算公式 

*/
/* 

#include <stdio.h>

int main(){
	//輸入身高 體重: 
	float height=0.0, weight=0.0;
	while( true)//避免使用者輸入負數，負數就重新輸入 
	{
		printf("請輸入身高:");
		scanf("\n%f",&height); 
		printf("請輸入體重:");
		scanf("\n%f",&weight);
		if(height>=0&&weight>=0)//輸入都是正數就break 
		{
		  	break;
		}
		else
		{
			printf("輸入有錯誤，請重新輸入數字:");
		}		
	}

	//height要先換算成公尺計算 
	height=height/100;
	//計算BMI數值 
	float bmi = weight / (height*height);
	printf("\nBMI=%f\n",bmi); 
	
	if(bmi<18.5)
	{
		printf("體重過輕");
	}
	else if(bmi>=18.5&&bmi<24)
	{
		printf("正常範圍");
	}
	else if(bmi>=24&&bmi<27)
	{
		printf("異常範圍-過重");		
	}
	else if(bmi>=27&&bmi<30)
	{
		printf("異常範圍-輕度肥胖");		
	}
	else if(bmi>=30&&bmi<35)
	{
		printf("異常範圍-中度肥胖");		
	}
	else
	{
		printf("異常範圍-重度肥胖");
	}
				
	return 0;
}
 */ 