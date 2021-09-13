#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int a;
    float b;

}bo; 

void input(bo*);


int main()
{
    bo k;
    k.a = 10;
    k.b = 23.575;
    input(&k);
    
    return 0;
    
}

void input(bo* sim)
{
    printf("%d\n",sim->a); 
    printf("%.1f\n",sim->b);
}