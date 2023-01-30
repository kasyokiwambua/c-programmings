// program to find compound intrest
#include <stdio.h>
#include <math.h>
int main ()
 {
     float principle,rate,time,intrest;
    printf("\nEnter the values ofprinciple,rate,time:");
    scanf("%f,%f,%f",&principle,&rate,&time);
    intrest=principle*'pow'(1+rate)^time;
    printf("\nintrest=%f",intrest);
    return 0;
}