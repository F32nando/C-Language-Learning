/*
內容宣告:
以下程式碼由 李翼全 提供

練習題
已知一字串 char *str = "oracle java studio develop";
分割字串輸出成
oracle
java
studio
develop 
共分割__個區塊 
*/



#include<stdio.h>
#include<string.h>
/*
int main(){
	char *str ="oracle java studio develop";

	int len=strlen(str);
	printf("字串長度=%d\n",len);
	
	//char sentence[len];
	int i;
	int piece=0;//分割的區塊 
	for(i=0;i<len;i++)
	{
		
		//sentence[i] = str[i];
		//printf("%c",sentence[i]);
		//if(sentence[i]==32){ //' ' 
		//	printf("\n");
		//}

		if(str[i]==' ') //' ' 空白 或ASCII 32表示空白 
		{
			piece++;
			printf("\n");
		}
		else
		{
			printf("%c",str[i]);
		}

	}
	printf("共分割%d個區塊",piece+1);//字尾要多算一個區塊也可寫++p 
	return 0;	
}

*/