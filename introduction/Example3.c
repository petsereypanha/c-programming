#include<stdio.h>
int main(){
    int  a;  // number 1 2 3 ...   4   %d
    long  b;  // number  long > int  4  %ld
    float  c;  // number  1.233  3.445 ..  4  %f
    double  d;  // number  double > float   8   %ld
    char   e;   //   1      %c
    char   f[30];  //  30   %s        String
    printf("Size a:%lu\n",sizeof(a));
    a=10;
    printf("Output A :%d\n",a);
    b=200;
    printf("Output B :%ld\n",b);
    return 0;
}