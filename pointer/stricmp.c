#include<stdio.h>
#include<string.h>     // cstring  string
int main(){

    char name[20],sname[20];

    printf("Input Name  :");gets(name);
    printf("Input Sname :");gets(sname);
    strcat(name,sname);
    printf("Output String Copy :%s",name);
    printf("Output String Copy :%s",sname);
    return 0;
}