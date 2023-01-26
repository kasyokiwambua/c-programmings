// program to find simple intrest
#include <stdio.h>
int main()
 {
float principle,rate,time,intrest;
    printf("Enter the values of principle,rate,\n:");
scanf("%f,%f<%f",&principle,&rate,&time);
intrest=principle*time*rate/100;
printf("\n Intrest=%f",intrest);
    return 0;
}