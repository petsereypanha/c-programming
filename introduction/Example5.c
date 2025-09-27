#include<stdio.h>
int main(){
    int id;     // %d
    char name[30];   // %s
    char gender;     // %c
    float score;   // %f // double

    printf("Input ID     :");scanf("%d",&id);
    printf("Input Name   :");scanf("%s",&name);
    printf("Input Gender :");fflush(stdin);scanf("%c",&gender);     // fflush(stdin);
    printf("Input Score  :");scanf("%f",&score);

    printf("\nOutput ID      :%d\n",id);
    printf("Output Nam     :%s\n",name);
    printf("Output Gender  :%c\n",gender);
    printf("Output Score   :%f\n",score);          // %g 
    return 0;
}