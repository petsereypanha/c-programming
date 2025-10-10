#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char buf[250];
    fp = fopen("EYEC.txt","r");
    if (fp == NULL)
    {
        printf("Open file Error!\n");
        exit(0);
    }
    while (fgets(buf, 250, fp) != NULL)
    {
        printf("\n%s\n", buf);
    }
    return 0;
}