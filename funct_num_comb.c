#include <stdio.h>
void playvalue();
int count = 0;

int main()
{
    playvalue();
    return 0;
}


void playvalue()
{
    int i;
    int j;
    int k;
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            for(k=1;k<5;k++)
            {
                if(i!=j && j!=k && k!=i)
                {
                    printf("第%d組:%d%d%d\n",count+1,i,j,k);
                    count++;
                }

            }
        }
    }
    printf("可以產生[%d]組不重複的1-4數字組合",count);

}