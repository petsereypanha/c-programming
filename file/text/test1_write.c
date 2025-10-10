#include<stdio.h>
int main(){
    FILE *fp;
    char name[20];
    fp = fopen("Test1.txt","W");
    if(fp == NULL){
        printf("Open File Error !\n");
        return 0;
    }
    printf("Input Name :");
    scanf("%s",&name);

    fprintf(fp,"%s",name);
    fclose(fp);
    return 0;
}