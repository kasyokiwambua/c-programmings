// 3D Array
# include <stdio.h>
int main ()
{
    int i,j,k;
    int marks [3][3][3]={{{10,20,30},{40,50,60},{70,80,90}},
                        {{1,2,3},{4,5,6},{8,9,10}},
                        {{10,11,12},{9,7,8},{12,10,11}}};
for(i=0;i<3;i++)  
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            printf("\n marks=%d",marks [i][j][k]);
        }
    }
}
return 0;
}