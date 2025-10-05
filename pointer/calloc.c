#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>
int main(){
    int  *ptr,i,n,temp,b=0,j;
    char op;
    // Back:
    do{
        printf("\nA. Input\n");
        printf("B. Output \n");
        printf("C. Search \n");
        printf("D. Update \n");
        printf("E. Sort   \n");
        printf("F. Add    \n");
        printf("G. Exit   \n");
        printf("Please Select One Option :");
        fflush(stdin); scanf("%c",&op);
        switch (op){
            case 'A':
            case 'a':{
                printf("Input Size Of Pointer :");
                scanf("%d",&n);
                ptr = (int*)calloc(n,sizeof(int));
                for( i=0 ; i<n ; i++){
                    printf("Input (ptr+%d) :",i);
                    scanf("%d",(ptr+i));
                }
            }break;
            case 'B':
            case 'b':{
                printf("\n");
                for( i=0 ; i<n ; i++){
                    printf("Output (ptr+%d) :%d\n",i,*(ptr+i));
                }
            }break;
            case 'C':
            case 'c':{
                printf("Input Pointer To Search :");
                scanf("%d",&temp);
                for( i=0; i<n ; i++){
                    if(temp == *(ptr+i)){
                        printf("\nPointer (ptr+%d) : %d\n",i,*(ptr+i));
                    }
                    b=1;
                }
                if(b==0){
                    printf("Search Is Not Found ..!\n");
                }
            }break;
            case 'D':
            case 'd':{
                printf("Input Pointer To Search :");
                scanf("%d",&temp);
                for( i=0; i<n ; i++){
                    if(temp == *(ptr+i)){
                       printf("Input Pointer (ptr+%d) :",i);
                        scanf("%d",(ptr+i));
                    }
                    b=1;
                }
                if(b==0){
                    printf("Search Is Not Found ..!\n");
                }
            }break;
            case 'E':
            case 'e':{
                for ( i = 0; i < n; i++){  
                    for ( j = i+1 ; i <n ; i++){   
                        if(*(ptr+i)>*(ptr+j)){
                            temp = *(ptr+i);
                            *(ptr+i) = *(ptr+j);
                            *(ptr+j) = temp;
                        }
                    }
                }
                printf("Sort Is Successful ...!\n");
            }break;
            case 'F':
            case 'f':{
                int m;
                printf("Add Element Of Pointer :");
                scanf("%d",&m);
                // ptr = (int *) realloc(ptr,m*sizeof(int));
                ptr = realloc(ptr,m*sizeof(int));
                
                printf("=============  Input ==============\n");
                for( i = n ; i < n+m ; i++){
                    printf("Input (ptr+%d) :",i);
                    scanf("%d",(ptr+i));
                }
                n = n+m;
            }break;   
            case 'G':
            case 'g':{
                exit(0);
            }break;                          
        }

        printf("\n\nPress Enter To Continou ..!\n");
    }while (getchar() == 10); // getch() == 13
    // if(getchar() == 10) goto Back;   // getch() == 13
    free(ptr);
    return 0;
}