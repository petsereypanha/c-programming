#include<stdio.h>
#include<stdlib.h>
struct Employee{
    int id,dd,mm,yyyy;
    char name[40];
}emp;
int main(){
 // Window  system("cls");
    system("clear");
     FILE *fp;
     char op;
     Again:
        printf("\n________________| M E N U |__________________\n");
        printf(" A. Write \n");
        printf(" B. Read \n");
        printf(" C. Exit \n");
        printf("_______________________________________________\n");
        printf(" Please Select one Option :");scanf("%s",&op);
        switch (op){
            case 'a':
            case 'A':{
                    fp = fopen("Employee.bin","wb");
                    if(!fp){
                        printf(" Error! in creating file ..\n");
                        exit(0);}
                        printf(" ID      :");scanf("%d",&emp.id);
                        printf(" Name    :");fflush(stdin);gets(emp.name);
                        printf(" Day     :");scanf("%d",&emp.dd);
                        printf(" Month   :");scanf("%d",&emp.mm);
                        printf(" Year    :");scanf("%d",&emp.yyyy);
                    fwrite(&emp,sizeof(struct Employee),1,fp);
                  fclose(fp);
               }break;
               case 'b':
               case 'B':{
                fp = fopen("Employee.bin","rb");
                    if(!fp){
                        printf(" Error! in creating file ..\n");
                        exit(0);}
                    printf("%12s%14s%16s\n","ID","Name","DOB");
                    while (1==(fread(&emp,sizeof(struct Employee),1,fp))){
                       printf("%12d%14s%12d/%d/%d\n",emp.id,emp.name,emp.dd,emp.mm,emp.yyyy);
                    }
                    fclose(fp);
               }break;
               case 'c':
               case 'C':{
                exit(0);
               }break;
        }
        printf("Prees Enter to Continue ...!\n");
//     DEV getch()==13 , VS Code getchar()==10
     if(getchar()==10) goto Again;
    return 0;
}