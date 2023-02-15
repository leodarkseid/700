#include <stdio.h>

int main()
{
int*ptr,q;
q=50;
/*address of q is assigned to ptr*/
ptr=&q;
/*display q's value using ptr valuable*/
printf("%d ",*ptr);
return 0;
}