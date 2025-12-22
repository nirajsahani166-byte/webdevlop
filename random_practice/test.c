#include<stdio.h>
int main()
{
int a, b;
char n;
printf("enter one of these operators which you like to use +, -, /, *");
scanf(" %c",&n);
printf("enter any two numbers");
scanf("%d%d",&a,&b);
if(n=='+')
{
printf("the addition is %d",a+b);    
}
else if(n=='-')
{
    printf("the subtraction ia %d",a-b);

}
else if(n=='*')
{
printf("the multiplication is %d",a*b);
}
else if(n=='/')
{
printf("the division is %d",a/b);
}
return 0;
}