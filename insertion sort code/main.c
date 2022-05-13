#include <stdio.h>
#include <stdlib.h>
//insertion sort code in c
int main()
{
    int i,j,temp,count,num[100];
    printf("how many number are  going to enter...?\n");
    scanf("%d",&count);
    printf("Enter %d element ",count);
    for(i=0; i<count; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1; i<count; i++)
    {
        temp=num[i];
        j=i-1;
        while((temp<num[j]&&j>=0))
        {
            num[j+1]=num[j];
            j=j-1;
        }
        num[j+1]=temp;
    }
    printf("Order of sorted elements !\n");
    for(i=0; i<count; i++)
    {
        printf("%d\t,",num[i]);
    }
    return 0;
}
