#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i=i+2)
    {
        for(j=1;j>=i;j=j-2)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
}
