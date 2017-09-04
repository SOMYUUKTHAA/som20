#include <stdio.h>
int main()
{
int num,s,range;
printf("Enter an integer: ");
scanf("%d",&num);
printf("Enter the range:");
scanf("%d",&range);
for(s=1;s<= range;++s)
{
printf("%d*%d=%d\t",num,s,num*s);
}
return 0;
}
