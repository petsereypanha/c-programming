#include<stdio.h>
struct Employee{
    int id;
    char name[20],gender[20];
    float salary;
};
int main(){

    struct Employee obg1;

    printf("Input ID     :");scanf("%d",&obg1.id);
    printf("Input Name   :");fflush(stdin);gets(obg1.name);
    printf("Input Gender :");fflush(stdin);gets(obg1.gender);
    printf("Input Salary :");scanf("%f",&obg1.salary);

    printf("\n\n%12s %14s %16s %16s\n","ID","Name","Gender","Salary");
    printf("%12d %14s %16s %15.2f$\n",obg1.id,obg1.name,obg1.gender,obg1.salary);

    return 0;
}