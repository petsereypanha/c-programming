#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n;
    int num[10];
    printf("Input Size Of Pointer: ");
    scanf("%d",&n);

    p = (int *)malloc(n*(sizeof(int)));

    for (int i = 0; i < n; i++)
    {
        printf("Input Number :");
        scanf("%d",&num[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Outptu Number :%d\n",num[i]);
    }
    free(p);
    return 0;
}