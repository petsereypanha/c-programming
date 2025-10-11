#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct Staff{
    int id;
    char name[30],gender[10];
    float salary;
    double bonus,Income;
};
int main(){
    int i,n,bun,j,count;
    char op;
    bool b = false;
    FILE *fp;
    FILE *fp1;
    struct Staff sf;
    struct Staff temp,Array[50];
    do
    {
        printf("\nA. Input\n");
        printf("B. Output\n");
        printf("C. Search\n");
        printf("D. Update\n");
        printf("E. Delete\n");
        printf("F. Sort\n");
        printf("A. Append\n");
        printf("H. Exit\n");
        printf("Please Select One Option :");scanf("%c",&op);
        switch (op)
        {   
            case 'A':
            case 'a':{
                fp = fopen("Staff.bin","wb");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                printf("\nInput Element Of Staff :");
                scanf("%d",&n);
                for( i= 0; i< n; i++){
                    printf("\nInput Staff_ID     :");scanf("%d",&sf.id);
                    printf("Input Staff_Name   :");fflush(stdin);gets(sf.name);
                    printf("Input Staff_Gender :");fflush(stdin);gets(sf.gender);
                    printf("Input Staff_Salary :");scanf("%f",&sf.salary);
                    if(strcmp("male",sf.gender)==0 && sf.salary < 200){
                        bun = 20;
                    }else if (strcmp("female",sf.gender)==0 && sf.salary < 200){
                        bun = 30;
                    }else{
                        bun = 0;
                    }
                    sf.bonus = (sf.salary * bun)/100;
                    sf.Income = sf.salary + sf.bonus;
                    fwrite(&sf,sizeof(struct Staff),1,fp);
                }
                fclose(fp);
            }break;
            case 'B':
            case 'b':{
                fp = fopen("Staff.bin","rb");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                printf("\n %12s %14s %16s %16s %15s %16s\n\n","ID","Name","Gender","Salary","Bonus","Income");
                while (1==(fread(&sf,sizeof(struct Staff),1,fp))){
                     printf("%12d %14s %16s %15.2f$ %14.2f$ %15.2f$\n",sf.id,sf.name,sf.gender,sf.salary,sf.bonus,sf.Income);
                }
                fclose(fp);
            }break;
            case 'C':
            case 'c':{
                fp = fopen("Staff.bin","rb");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                char sname[30];
                printf("\nInput Staff's Name To Search :");fflush(stdin);gets(sname);
                while (1==(fread(&sf,sizeof(struct Staff),1,fp))){
                    if(strcmp(sname,sf.name)==0){
                        printf("\n %12s %14s %16s %16s %15s %16s\n\n","ID","Name","Gender","Salary","Bonus","Income");
                        printf("%12d %14s %16s %15.2f$ %14.2f$ %15.2f$\n",sf.id,sf.name,sf.gender,sf.salary,sf.bonus,sf.Income);
                        b=true;
                    }
                }
                if(b == false){
                    printf("Search is Not Found..!\n");
                }
                fclose(fp);
            }break;
            case 'D':
            case 'd':{
                fp = fopen("Staff.bin","rb");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                fp1 = fopen("Staff_Clon.bin","wb");
                if(!fp1){
                    printf("Open File Error\n");
                    exit(0);
                }
                char sname[30];
                printf("\nInput Staff's Name To Search For Update :");fflush(stdin);gets(sname);
                while (1==(fread(&sf,sizeof(struct Staff),1,fp))){
                    if(strcmp(sname,sf.name)==0){
                        printf("\nInput Staff_ID     :");scanf("%d",&sf.id);
                        printf("Input Staff_Name   :");fflush(stdin);gets(sf.name);
                        printf("Input Staff_Gender :");fflush(stdin);gets(sf.gender);
                        printf("Input Staff_Salary :");scanf("%f",&sf.salary);
                        if(strcmp("male",sf.gender)==0 && sf.salary < 200){
                            bun = 20;
                        }else if (strcmp("female",sf.gender)==0 && sf.salary < 200){
                            bun = 30;
                        }else{
                            bun = 0;
                        }
                        sf.bonus = (sf.salary * bun)/100;
                        sf.Income = sf.salary + sf.bonus;
                        fwrite(&sf,sizeof(struct Staff),1,fp1);
                        b=true;
                        printf("Update is Successful\n");
                    }else{
                        fwrite(&sf,sizeof(struct Staff),1,fp1);
                    }
                }
                if(b == false){
                    printf("Search is Not Found..!\n");
                }
                fclose(fp);
                fclose(fp1);
                remove("Staff.bin");
                rename("Staff_Clon.bin","Staff.bin");
            }break;
            case 'E':
            case 'e':{
                fp = fopen("Staff.bin","rb");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                fp1 = fopen("Staff_Clon.bin","wb");
                if(!fp1){
                    printf("Open File Error\n");
                    exit(0);
                }
                char sname[30];
                printf("\nInput Staff's Name To Search For Delete:");fflush(stdin);gets(sname);
                while (1==(fread(&sf,sizeof(struct Staff),1,fp))){
                    if(strcmp(sname,sf.name)==0){
                        printf("Delete is Successful\n");
                        b=true;
                    }else{
                        fwrite(&sf,sizeof(struct Staff),1,fp1);
                    }
                }
                if(b == false){
                    printf("Search is Not Found..!\n");
                }
                fclose(fp);
                fclose(fp1);
                remove("Staff.bin");
                rename("Staff_Clon.bin","Staff.bin");
            }break;
            case 'F':
            case 'f':{
                fp = fopen("Staff.bin","rb");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                fp1 = fopen("Staff_Clon.bin","wb");
                if(!fp1){
                    printf("Open File Error\n");
                    exit(0);
                }
                while (1==(fread(&sf,sizeof(struct Staff),1,fp))){
                    Array[count] = sf;
                    count ++;
                }
                for(i=0; i<count; i++){
                    for(j=i+1; j<count ; j++){
                        if(Array[i].id > Array[j].id){
                            temp = Array[i];
                            Array[i] = Array[j];
                            Array[j] = temp;
                            }
                        }
                        fwrite(&Array[i],sizeof(struct Staff),1,fp1);
                    }
                printf("Sort IS Completedm ..\n");
                fclose(fp);
                fclose(fp1);
                remove("Staff.bin");
                rename("Staff_Clon.bin","Staff.bin");
            }break;
            case 'G':
            case 'g':{
                fp = fopen("Staff.bin","ab");
                if(!fp){
                    printf("Open File Error\n");
                    exit(0);
                }
                printf("\nInput Element Of Staff :");
                scanf("%d",&n);
                for( i= 0; i< n; i++){
                    printf("\nInput Staff_ID     :");scanf("%d",&sf.id);
                    printf("Input Staff_Name   :");fflush(stdin);gets(sf.name);
                    printf("Input Staff_Gender :");fflush(stdin);gets(sf.gender);
                    printf("Input Staff_Salary :");scanf("%f",&sf.salary);
                    if(strcmp("male",sf.gender)==0 && sf.salary < 200){
                        bun = 20;
                    }else if (strcmp("female",sf.gender)==0 && sf.salary < 200){
                        bun = 30;
                    }else{
                        bun = 0;
                    }
                    sf.bonus = (sf.salary * bun)/100;
                    sf.Income = sf.salary + sf.bonus;
                    fwrite(&sf,sizeof(struct Staff),1,fp);
                }
                fclose(fp);
            }break;
            case 'H':
            case 'h':{
                    exit(0);
            }break;
        }
        printf("Press Enter To Continue ..!\n");
    } while (getchar() == 10);
    
    return 0;
}