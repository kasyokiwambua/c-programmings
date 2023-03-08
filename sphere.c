//program to find area of a sphere
#include <stdio.h>
float area(int r);  
int main()
{
 float r,results;
 printf("Enter value of r:");
 scanf("%f",&r);
    results = area(r);
    printf("the area is %f",results);
return 0;
}
//function definition                                              
float area(int a)
 {
int pi=3.142;    
int b=a*a*3.142*4;
 return b;
 }
