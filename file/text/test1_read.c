#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char name[20];
    fp = fopen("Test1.txt","r");
    if(fp == NULL){
        printf("Open File Error !\n");
        exit(0);
    }
    fscanf(fp,"%s",name);
    printf("Output File : %s\n",name);
    fclose(fp);
    return 0;
}