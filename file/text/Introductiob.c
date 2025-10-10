#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("Introduction.txt","w+");
    fprintf(fp,"Hello Welcome Back !\n");
    fclose(fp);
    return 0;
}