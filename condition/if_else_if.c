#include<stdio.h>
int main(){
    float score;
    printf("\nInput Score :");scanf("%f",&score);
    if(score == 100){
        printf("\nGood : %f\n",score);
    }else if(score == 90){
        printf("\nOutput :%f\n",score);
    }else if(score == 80){
        printf("\nOutput :%f\n",score);
    }else if(score == 70){
        printf("\nOutput :%f\n",score);
    }else if(score == 60){
        printf("\nOutput :%f\n",score);
    }else if(score == 50){
        printf("\nOutput :%f\n",score);
    }else{
        printf("Fall \n");
    }
    return 0;
}