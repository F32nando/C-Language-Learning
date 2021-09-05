/*
#include <stdio.h>
#include <string.h>

int main(){
	char data[26];
	char i;
	int j=0;
	for(i='a';i<='z';i++)
	{
		data[j]=i;
		j++;
		//printf("%d\t",data[j]);
	}

	int k;
	//int len_data = sizeof(data);
	//for(k=0;k<len_data;k++)
	for(k=0;k<sizeof(data);k++)
	{
		printf("%c\t",data[k]);
	}
	

	return 0;	
}

*/