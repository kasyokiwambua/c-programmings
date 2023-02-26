#include <stdio.h> 
int main() { 
    double r, h, v; 
    printf("Enter radius and height: "); 
    scanf("%lf %lf", &r, &h);   
  
    // Calculating volume 
    v = 3.14 * r * r * h; 
 
    // %.2lf displays number up to 2 decimal point 
    printf("Volume = %.2lf", v); 
     
    return 0; 
} 