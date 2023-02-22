//natural numbers in reverse order
#include<stdio.h>
int main()
{
int num;
printf("Enter a positive number\n");
scanf("%d",&num);
printf("\nNatural numbers from 1")while(num)
{
printf("%d",num);
num--;
}
printf("\n");
return 0;
}