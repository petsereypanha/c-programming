#include<stdio.h>
int main(){
    int x,y;
    printf("Input X :");scanf("%d",&x);
    printf("Input Y :");scanf("%d",&y);

    if(x>0){
        if(y>0){
            printf("Y > 0\n");
        }else{          // (y<0,y=0)
            printf("Y < 0 AND Y = 0\n");
        }
        printf("X > 0\n");
    }else{             // (x<0,x=0)
        printf("X < 0 AND X=0\n");
    }
    return 0;
}