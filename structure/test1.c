#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
    int id;
    char name[30],gender[20],grade;
    float math,khmer,history,physic;
    double avge,total;
};
void Input(struct Student stu[],int n);
void Header();
void Output(struct Student stu[],int n);
int main(){
    struct  Student stu[20];
    int i,n;
    char op;
    do{
        printf("\n A. Input  \n");
        printf(" B. Output \n");
        printf(" C. Search \n");
        printf(" D. Exit   \n");
        printf(" Please Select One Option :");
        scanf("%c",&op);
        switch (op){
            case 'A':
            case 'a':{
                printf("Input Element of Student :");
                scanf("%d",&n);
                for(i=0; i<n ;i++){
                    Input(stu,i);
                }
            }break;
            case 'B':
            case 'b':{
                Header();
                for(i=0; i<n ; i++){
                    Output(stu,i);
                }
            }break;
            case 'C':
            case 'c':{
                int op1,sid;
                char sname[20];
                Again:
                    printf("\n1. Search By Name\n");
                    printf("2. Search By ID  \n");
                    printf("3. Exit    \n");
                    printf("Please Choose One Option :");
                    scanf("%d",&op1);
                    switch (op1){
                        case 1:{
                            printf("Input Name For Search :");
                            fflush(stdin);gets(sname);
                             for(i=0;i<n;i++){
                                if(strcmp(sname,stu[i].name)==0){
                                    Header();
                                    Output(stu,i);
                                }
                             }
                        }break;
                        case 3:{
                            printf("Input ID For Search :");
                            scanf("%d",sid);
                            for(i=0;i<n;i++){
                                if(sid == stu[i].id){
                                    Header();
                                    Output(stu,i);
                                }
                            }
                        }break;
                    }
                if(op1 != 3) goto Again;
            }break;
            case 'D':
            case 'd':{
                exit(0);
            }break;
        }
    }while(getchar()==10);
    return 0;
}
void Input(struct Student stu[],int n){
    printf("Input ID      :");scanf("%d",&stu[n].id);
    printf("Input Name    :");fflush(stdin);gets(stu[n].name);
    printf("Input Gender  :");gets(stu[n].gender);
    printf("Input Math    :");scanf("%f",&stu[n].math);
    printf("Input Khmer   :");scanf("%f",&stu[n].khmer);
    printf("Input History :");scanf("%f",&stu[n].history);
    printf("Input Physic  :");scanf("%f",&stu[n].physic);
    stu[n].total = stu[n].math + stu[n].khmer + stu[n].history + stu[n].physic;
    stu[n].avge = stu[n].total / 4;
    if(stu[n].avge <= 100 && stu[n].avge > 90){
        stu[n].grade = 'A';
    }else if (stu[n].avge <=90 && stu[n].avge > 80){
        stu[n].grade = 'B';
    }else if (stu[n].avge < 80 && stu[n].avge > 70){
        stu[n].grade = 'C';
    }else if (stu[n].avge < 70 && stu[n].avge > 60){
        stu[n].grade = 'D';
    }else if (stu[n].avge < 60 && stu[n].avge > 50){
        stu[n].grade = 'E';
    }else{
        stu[n].grade = 'F';
    } 
}
void Header(){
    printf("\n %12s %14s %16s %14s %15s %17s %16s %13s %15s %15s\n","ID","Name","Gender","Math","Khmer","History","Physic","Age","Total","Grade");
}
void Output(struct Student stu[],int n){
     printf("\n %12d %14s %16s %14.2f %15.2f %17.2f %16.2f %13.2lf %15.2lf %15c\n",stu[n].id,stu[n].name,stu[n].gender,stu[n].math,stu[n].khmer,stu[n].history,stu[n].physic,stu[n].avge,stu[n].total,stu[n].grade);
}