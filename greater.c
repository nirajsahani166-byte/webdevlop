#include<stdio.h>
int main()
{
int a,b;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
if(a>b)
{
    printf("%d is greater",a);
}
else if(b>a)
{
    printf("%d is greater",b );
}
else if(a==b&&b==a)
{
    printf("%d is equal numbers",a);
}
else
{
    printf("program is invalid");
}
return 0;
}
