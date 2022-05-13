#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100],i,j,swap,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter Integer Number:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("You Have Elements Numbers !\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    printf("You have sorted elements !\n");
    for(i=0; i<n; i++)
    {
        printf("%d,\t",array[i]);
    }
    return 0;
}
