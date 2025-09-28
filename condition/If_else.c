#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("\nInput Name :");gets(name);
    if(strcmp(name,"jing")==0){   // strcmp A==A  // stricmp  A==a
        printf("Completed ..!\n");
    }else{
        printf("Not Found ..!\n");
    }
    return 0;
}