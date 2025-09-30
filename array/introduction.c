#include<stdio.h>
int main(){
    int a[12],n;
    printf("Input Number Of Array :");scanf("%d",&n);
    for( int i=0; i<n ;i++){
        printf("Input A [%d] :",i);scanf("%d",&a[i]);
    }
    for( int i=0; i<n ; i++){
        printf("Output A [%d] = %d\n",i,a[i]);
    }
    return 0;
}