#include<stdio.h>
int main(){

    int i,j,k;
    // for(i=1 ; i<= 5; i++){          // 5   
    //     for(k=1 ; k<=2 ; k++){     //  2   
    //         printf("Etec Center\n");           // Etec_Center Etec_Center
    //     }
    // }

    // for( i = 0 ; i < 10 ; i++){    // 10   0 1 2 3 4 5 6 7 8 9 
    //     for( k = 1 ; k < 6 ; k++){   // 5  1 2 3 4 5  
    //         printf("Etec Center :%d\n",k);
    //     }
    // }

    for(  i = 0 ; i < 4 ; i++){        //  4   0 1 2 3
        for( j = 1 ; j < 3 ; j++){      //  2   1 2  
            for( k = 3 ; k <=7 ; k++){   // 5   3 4 5 6 7 
                printf(" I Like You \n");
            }
        }
    }
    return 0;
}