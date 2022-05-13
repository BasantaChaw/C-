#include <stdio.h>
#include <stdlib.h>

int main()
{
    //wap to search given number from user in array element
    //the program is coded by Basanta chaudhary
    int num,arr[100];
    int i,User_input=0;
    printf("How many Numbers are there...?\n");
    scanf("%d",&num);
    printf("There are %d:",num);
    for(i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("\n You Have Entered Array ELements..!\n");
    printf("ENter search Number:");
    scanf("%d",&User_input);
    for(i=0; i<num; i++)
    {
        if(arr[i]==User_input)
        {
            printf("You have Find !\n");
            printf("POsition Number%d:",i);
            break;
        }
    }
    if(num==arr[i])
    {
        printf("You Have Not Find");
    }

    return 0;
}
