#include <stdio.h>

int main()
{
int Total=0, i;
for(i=0;i<10;i++)
{
Total += i;//This is same as Total=Total+i
}
printf("Total = %d",Total);
}
