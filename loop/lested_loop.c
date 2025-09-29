#include<stdio.h>
int main(){
        int i,j;
        for( i = 1 ; i <= 3; i++){     //  1 <= 3  2<=3     parent 
            for( j = 1 ; j <= 6 ; j++){     // 1<=6 2<=6 3<=6 4<=6 5<=6 6<=6  child
                printf("Hello World : %d\n",j);        // 6<=7            
            }
        }

        // 


        // for( i = 1 ; i <= 3; i++){   
        //     printf("Hi \n");
        // }
        // for( j = 1 ; j <= 6 ; j++){
        //     printf("Hello : %d\n",j);
        // }
    return 0;
}