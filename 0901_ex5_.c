
 
 
#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int data[5];
    int i;
    int key_val=0;
    int len = sizeof(data)/sizeof(int);//°}|Cao?×
       
    for(i=0;i<len;i++)
    {
        printf("input %d element:",(i+1));
        scanf("\n%d",&key_val);
        data[i]=key_val;
        }
 
        int j=0,odd=0,even=0;
 
        while(j<len)
        {
            if(data[j]%2==0)
			{
                even++;
                printf("%d\t",data[j]);
            }
   	 	 	j++;
		}
 
  	    printf("even has %d \n ",even);
 
   	   int k=0;
	    while(k<len)
        {
            if(data[k]%2==1)
            {
                odd++;
                printf("%d\t",data[k]);
            }
			k++;
        }
 
   	    printf("odd has %d\n ",odd);
 
 
        return 0;
}
 