// program to calculate grading system
#include <stdio.h>
int main()
 {
int maths,chem,phyc,average;    
    printf("Enter the values of maths,chem ,phyc:");
scanf("%d,%d,%d",&maths,&chem,&phyc);
average =(maths+chem+phyc)/3;
if(average>=70 && average<=100)
{printf("A");}
else if(average>=60 && average<=69)
{printf("B");}
else if(average>=50 && average<=59)
{printf("C");}
else if(average>=40 && average<=49)
{printf("D");}
else if(average>=0 && average<=39)
{printf("E");}
    return 0;
}