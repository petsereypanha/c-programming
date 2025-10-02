#include<stdio.h>
void NameFunction_Non_Parameter(){            // non-return non-parameter
    int code,qty;
    char name[20];
    float price,payment,f;
    int i,n;
    printf("Input Element of Product :");scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nInput Code :");scanf("%d",&code);
        printf("Input Name   :");fflush(stdin);gets(name);
        printf("Input Qty    :");scanf("%d",&qty);
        printf("Input Price  :");scanf("%f",&price);
        payment = qty * price;
    } 
     printf("\n%14s %14s %13s %15s %17s\n","Code","Name","Qty","Price","Payment");
    for(i=0;i<n;i++){
         printf("\n%14d %14s %13d %14.2f$ %16.2f$\n",code,name,qty,price,payment);
    }
}
void NameFunction_Has_Parameter(int a,int b, float c, char name[40]){   // non-return has-parameter
    c = a+b;
    printf("Output A    :%d\n",a);
    printf("Output B    :%d\n",b);
    printf("Output C    :%f\n",c);
    printf("Output Name :%s\n",name);
}
int Name_Function_Non_Paraneter(){         // return non_parameter
    int a =10 , b = 30;
    return a+b;
}
char Name_Char(){
    return 'b';
}
float Name_Function_Has_Paraneter(float y , float x){
    return x+y;
}
int main(){
        NameFunction_Non_Parameter();
        // int s,d;
        // char sname[20];
        float f;
        // printf("\nInput S     :");scanf("%d",&s);
        // printf("Input D     :");scanf("%d",&d);
        // printf("Input Sname :");fflush(stdin);gets(sname);
        // NameFunction_Has_Parameter(s,d,f,sname);
        NameFunction_Has_Parameter(11,22,f,"lala");
        printf("Output Name_Function_Non_Paraneter = %d\n",Name_Function_Non_Paraneter());
        printf("Output Function Char :%c\n",Name_Char());
        printf("Output Name_Function_Has_Paraneter :%f\n",Name_Function_Has_Paraneter(12.44,59.3));
    return 0;
}