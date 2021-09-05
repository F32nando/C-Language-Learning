/*
內容宣告:
以下程式碼由 李翼全 提供

char陣列的長度計算 

*/

/*
#include <stdio.h>
#include <string.h>

int main(){

	char a[] = {'a','b','c','d','e'};
	int len_of_a = sizeof(a);//因為 sizeof(char) char為1byte 
	printf("a[]的長度為%d\n",len_of_a);
	int i;
	for(i=0;i<len_of_a;i++)
	{
		printf("a[%d]=%c\t",i,a[i]);
	}
	
	char b[] = "abcde";
	int len_of_b = sizeof(b);//因為 sizeof(char) char為1byte 
	printf("\n\nb[]的長度為%d\n",len_of_b);

	for(i=0;i<len_of_b;i++)
	{
		printf("b[%d]=%c\t",i,b[i]);
	}
	
	char *c="abcdef";
	int len = strlen(c);
	printf("\n\n*c的長度為%d\n",len);
	for(i=0;i<len;i++)
	{
		printf("c[%d]=%c\t",i,c[i]);
	}
	printf("\n"]);
	
	char c1[]={'a','b','c','d','e','f'};
	char c2[]="abcdef";
	char *c3 = "abcdef";
	printf("%s\n",c1);
	printf("%s\n",c2);
	printf("%s\n",c3);

	return 0;	
}


*/