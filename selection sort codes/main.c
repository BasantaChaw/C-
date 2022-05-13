#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={6,12,0,18,11,99,55,45,34,2};
    int n=10;
    int i,j,swap,position;
    for(i=0;i<(n-1);i++){
        position=i;
        for(j=i+1;j<n;j++){
            if(a[position]>a[j]){
                position=j;
            }

    }
    if( position!=i){
        swap=a[i];
        a[i]=a[position];
        a[position]=swap;
    }
}
    for(i=0;i<n;i++){
         printf("%d\t",a[i]);
    }

    return 0;
}
