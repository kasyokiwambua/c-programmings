// programme to determine even or odd numbers
# include<stdio.h>
int eo (int x);
int main ()
{
    int num;
    printf("\n Enter value of number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("Number entered is even");
    else
    printf("Number entered is odd");
    return 0;
}
//function determination
int eo (int x)
{
    int n;
    n=x;
    return(n%2==0);
}