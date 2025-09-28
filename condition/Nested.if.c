#include<stdio.h>
#include<string.h>
int main(){
    int code,id;
    printf("\nInput Code :");scanf("%d",&code);
    printf("Input Id :");scanf("%d",&id);
    if(code == 123){
        if(id == 1122){
            printf("Successful\n");
        }
        printf("Output Code :%d\n",code);
    }
    return 0;
}