#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("EYEC.txt","w");
    if (fp == NULL)
    {
        printf("Open file Error!\n");
        exit(0);
    }
fprintf(fp,"Hello Welcome to blog website!\n");
fclose(fp);
printf("Write Success!\n");
    return 0;
}