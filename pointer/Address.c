#include<stdio.h>
int main(){
       int x =20;
       int *p;
       p = &x;
       printf("Output Address :%p\n",&x);
       printf("Output Address :%p\n",*p);
       printf("Output Address :%p\n",p);
    return 0;
}