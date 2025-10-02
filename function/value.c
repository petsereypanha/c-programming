#include<stdio.h>
void Sum(int x, int y){       // pass by value
    x = x+10;
    y = y+20;
    printf("Output X :%d\n",x);
    printf("Output Y :%d\n",y);
}
int main(){
        int a , b;
        printf("Input A  : ");scanf("%d",&a);
        printf("Input B  : ");scanf("%d",&b);
        Sum(a,b);
        printf("Output A :%d\n",a);
        printf("Output B :%d\n",b);
    return 0;
}