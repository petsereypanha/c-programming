#include<stdio.h>
int main(){
    int a,b;
    printf("Input A :");scanf("%d",&a);
    printf("Input B :");scanf("%d",&b);
    if(a<b){
        printf("A is Smaller\n");
    }else if(a==0 && b==0){
        printf("A is 0");
    }else{
        printf("A is Bigger\n");
    }
    (a<b) ? printf("A is Smaller\n"):printf("A is Bigger\n");
     (a<b) ?  printf("A is Smaller\n"):(a==0 && b==0) ? printf("A is 0"): printf("A is Bigger\n");
    return 0;
}