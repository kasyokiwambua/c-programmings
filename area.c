//program to find the area of a circle
#include <stdio.h>
int main()
{
float radius,pi=3.142,area;
   printf ("\n Enter value of radius:");
   scanf ("%f",&radius);
    printf("\n Enter value of pi:");
    scanf ("%f",&pi);
area =radius*radius*pi;
printf("\n area=%f,");
    return 0;
}