

#include<stdio.h>
#include <string.h>

void show();

int main()
{
  show();
  printf("%s", "after show");
}


void show()
{
    printf("%s","show funct this \n");
}
