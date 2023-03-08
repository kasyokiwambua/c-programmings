//program to find area of a circle
#include <stdio.h>
  int pi(int r);  
int main()
{
 float r,area;
 printf("Enter value of r:");
 scanf("%f",&r);
    area = pi(r*r);
    printf("the pi is %.1f",area);
return 0;
}
//function definition                                              
int pi (int a)
 {
 int pi;    
 pi=a*3.142;
 return pi;
 }