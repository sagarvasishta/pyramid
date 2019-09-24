#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("number");
    scanf("%d",&n);
    k=n/2;
    for(i=0;i<k+1;i++)
    {
        for(j=0;j<k-i;j++)
            printf(" ");
        for(j=k-1-i;j<k+i;j++)
            printf("*");
        for(j=k+1;j<n-i;j++)
            printf(" ");
        printf("\n");
    }
    for(i=k+1;i<n;i++)
    {
        for(j=0;j<i-k;j++)
            printf(" ");
        for(j=i-k;j<n-i+k;j++)
            printf("*");
        for(j=n;j>n-i+k;j--)
            printf(" ");
        printf("\n");
    }
}
