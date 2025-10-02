#include<stdio.h>
void Reference(float x, float y, double z){
    x = x + 30;
    y = y + 20;
    z = x + y;
    printf("\nOutput X  :%.2f\n",x);
    printf("Output Y  :%.2f\n",y);
    printf("Output Z  :%.2lf\n",z);
}
int main(){
    float e,f;
    double j;
    printf("Input E  : ");scanf("%f",&e);
    printf("Input F  : ");scanf("%f",&f);
    Reference(e,f,j);
    printf("\nOutput E  :%.2f\n",e);
    printf("Output F  :%.2f\n",f);
    printf("Output J  :%.2lf\n",j);
    return 0;
}