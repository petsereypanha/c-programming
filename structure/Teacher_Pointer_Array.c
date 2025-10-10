#include<stdio.h>
#include<string.h>
struct Teacher{
    int code,age;
    char name[30],gender[10],subject[40];
    float hour,rate,salary;
}a[50],Temp;
void Input(struct Teacher *pt, int n){
    for(int i = 0; i < n; i++){
        printf("\nInput Code    :");scanf("%d",&(pt+i)->code);
        printf("Input Age     :");scanf("%d",&(pt+i)->age);
        printf("Input Name    :");fflush(stdin);gets((pt+i)->name);
        printf("Input Gender  :");fflush(stdin);gets((pt+i)->gender);
        printf("input Subject :");fflush(stdin);gets((pt+i)->subject);
        printf("Input Hour    :");scanf("%f",&(pt+i)->hour);
        printf("Input Rate    :");scanf("%f",&(pt+i)->rate);
        printf("Input Salary  :");scanf("%f",&(pt+i)->salary);
    }
}
void Header(){
        printf("\n%14s %13s  %14s %16s %17s %14s %15s  %16s\n","Code","Age","Name","Gender","Subject","Hour","Rate","Salary");
}
void Output(struct Teacher *pt, int n){
    printf("\n%14d %13d %14s %16s %17s %14.2f %15.2f %16.2f\n",(pt+n)->code,(pt+n)->age,(pt+n)->name,(pt+n)->gender,(pt+n)->subject,(pt+n)->hour,(pt+n)->rate,(pt+n)->salary);
}
float Income(struct Teacher a[50], int n){
    return a[n].salary + (a[n].rate*a[n].hour);
}
void Search(struct Teacher a[50], int n,char *Name){
    for(int i = 0; i < n; i++){
        if(strcmp(Name,a[i].name)==0){
            Output(a,i);
        }
    }
}
void Sort(struct Teacher a[50], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(Income(a,i) > Income(a,j)){
                Temp = a[i];
                a[i] = a[j];
                a[j] = Temp;
            }
        }
    }
}
int main(){
    int op,n;
    do
    {
        printf("\n1. Input And Output     \n");
        printf("2. Output Income < 150    \n");
        printf("3. Update 15% Salary < 100\n");
        printf("4. Search                 \n");
        printf("5. Sort                   \n");
        printf("6. Exit                   \n");
        printf("Please Select One Option :");scanf("%d",&op);
        switch(op){
        case 1:{
            printf("Element Of Array :");scanf("%d",&n);
            Input(a,n);
            Header();
            for(int i = 0; i < n; i++){
                Output(a,i);
            }
        }break;
        case 2:{
            for(int i = 0; i < n; i++){
                if(Income(a,i) < 150){
                    Output(a,i);
                }
            }
        }break;
        case 3:{
            for(int i = 0; i < n; i++){
                if((a[i]).salary < 100){
                    (a[i]).salary = (a[i]).salary + ((a[i]).salary * 15)/100;
                }
            }
        }break;
        case 4:{
            char  Sname[25];   // char *sn;   sn  = new char[25];
            printf("Input Name Employee To Search :");fflush(stdin);gets(Sname);
            Search(a,n,Sname);
        }break;
        case 5:{
            Sort(a,n);
        }break;
       }
    } while (op!=6);
    
    return 0;
}