#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Person
{
    int id;
    char name[30];
    char gender[10];
    float salary;
};
struct Employee
{
    int code;
    char name[30],gender[10];
    float salary,tax,rate,hours,Income;
};

// Employee{ code name gender salary tax rate hour Income}
int main(){
    FILE *fp;
    struct Person per;
    int i,n,op;
    do{
        printf("______________ MENU _______________\n");
        printf("1. Writ\n");
        printf("2. Read\n");
        printf("3. Search\n");
        printf("4. Exit\n");
        printf("___________________________________\n");
        printf("Please Select One Option :");
        scanf("%d",&op);
        switch (op){
            case 1:{
                fp = fopen("Person.bin","ab");  // or wb
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                printf("Input Element of Person :");scanf("%d",&n);
                for( i=0 ; i<n ; i++){
                    printf("\nInput ID     :");scanf("%d",&per.id);
                    printf("Input Name   :");fflush(stdin);gets(per.name);
                    printf("Input Gender :");fflush(stdin);gets(per.gender);
                    printf("Input Salary :");scanf("%f",&per.salary);

                    fwrite(&per,sizeof(struct Person),1,fp);
                }
                fclose(fp);
            }break;
            case 2:{
                fp = fopen("Person.bin","rb");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                printf("\n%12s %14s %16s %16s\n\n","ID","Name","Gender","Salary");
                while (1==(fread(&per,sizeof(struct Person),1,fp))){
                     printf("%12d %14s %16s %16.2f\n",per.id,per.name,per.gender,per.salary);
                }
                fclose(fp);
            }break;
            case 3:{
                fp = fopen("Person.bin","rb");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                bool b = false;
                int sid;
                printf("Input Person's ID To Search :");
                scanf("%d",&sid);
                while(1==(fread(&per,sizeof(struct Person),1,fp))){
                    if(sid == per.id){
                        printf("\n%12s %14s %16s %16s\n\n","ID","Name","Gender","Salary");
                        printf("%12d %14s %16s %16.2f\n",per.id,per.name,per.gender,per.salary);
                        b = true;
                    }
                }
                if(b == false){
                    printf("Search Is Not Found\n");
                }
            }break;
        }
    }while(op!=4);
    return 0;
}