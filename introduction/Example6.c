#include<stdio.h>
#include<math.h>
int main(){
    int x;
    int y;
    printf("Input x :");
    scanf("%d",&x);
    y = pow(x,8);
    printf("Ouput x^8 :%d\n",y);
    y = sqrt(x);
    printf("Output √x :%d\n",y);
    y = pow(x,1/3);
    printf("Output 3√x :%d\n",y);
    return 0;
}