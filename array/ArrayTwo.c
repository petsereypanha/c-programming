#include<stdio.h>
int main(){
    int i,j,n,m;
    int a[10][10],b[10][10],c[10][10];
    printf("Input Element OF N :");scanf("%d",&n);
    printf("Input Element Of M :");scanf("%d",&m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Input A [%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}