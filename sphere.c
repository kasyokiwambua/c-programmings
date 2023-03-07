//program to find area of a sphere
#include <stdio.h>
  int area(int r);  
int main()
{
 int r,results;
 printf("Enter value of r:");
 scanf("%d",&r);
    results = area(r*r*3/4*3.142);
    printf("the area is %d",results);
return 0;
}
//function definition                                              
int area(int a)
 {
 int area;    
 area=a*3/4*3.142;
 return area;
 }