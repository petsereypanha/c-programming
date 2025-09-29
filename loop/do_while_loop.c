#include<stdio.h>
int main(){
    int op,n,i;
    int code,qty;
    char name[20];
    float price;
    double payment;
    do{
        printf("\n 1. Input \n");
        printf(" 2. Output \n");
        printf(" 3. Search \n");
        printf(" 4. Exit \n");
        printf("Please Select One Option :");scanf("%d",&op);  // Select : 1
        switch (op){
            case 1:{    // Input 
                printf("\nInput Element of Product :");scanf("%d",&n);
                for( i = 1 ; i <= n ; i++){
                    printf("\nInput Code   :");scanf("%d",&code);
                    printf("Input Name   :");fflush(stdin);gets(name);
                    printf("Input Qty    :");scanf("%d",&qty);
                    printf("Input Price  :");scanf("%f",&price);
                    payment = price * qty;
                }
            }break;
            case 2:{     // Output 
                printf("\n %14s %14s %13s %15s %17s\n","Code","Name","Qty","Price","Payment");
                for( i = 1; i <= n; i++){
                    printf("%14d %14s %13d %14.1f$ %16.1lf$\n",code,name,qty,price,payment);
                }
            }break;
            case 3:{    // saerch
                int op1;
                do{
                    printf(" 1. Search By Code \n");
                    printf(" 2. Search By Name \n");
                    printf(" 3. End ");
                    printf("Please Choose One Option :");scanf("%d",&op1);
                    switch(op1){
                        case 1: {       // Search By Code 
                            int scode;
                            printf("Input Code To Search :");scanf("%d",&scode);
                            for(i = 1; i < n; i++){
                                if(scode == code){
                                    printf("%14d %14s %13d %14.1f$ %16.1lf$\n",code,name,qty,price,payment);
                                }
                            }
                        }
                    }
                }while(op1 != 3);  
            }break;
        }
    }while (op != 4);
    return 0;
}