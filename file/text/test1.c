#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    FILE *fp;
    fp = fopen("Number.txt","w");
    if(fp == NULL){
        printf("Error Open File\n");
        exit(0);
    }
    printf("Input Number :");
    scanf("%d",&num);
    fprintf(fp,"%d",num);
    fclose(fp);
    return 0;
}