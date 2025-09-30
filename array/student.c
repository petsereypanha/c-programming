#include<stdio.h>  
#include<stdlib.h>
#include<string.h>
// #include<conio.h>
int main(){
        int b = 0;
        char op;
        int i,n,j;
        int id[20];
        char name[20][30],gender[20][10],grade[20];
        float score1[20],score2[20],score3[20];
        double total[20],avg[20];
        do{
            printf("\n============----| M E N U |----===========\n");
            printf(" A. Input  \n");
            printf(" B. Output \n");
            printf(" C. Search \n");
            printf(" D. Update \n");
            printf(" E. Delete \n");
            printf(" F. Insert \n");
            printf(" G. Sort   \n");
            printf(" H. Add    \n");
            printf(" I. Exit   \n");
            printf("Please Select One Option :");
            scanf("%s",&op);
            switch(op){
                case 'a':
                case 'A':{
                    printf("Input Element Of Student :");scanf("%d",&n);
                    for(i=0;i<n;i++){
                        printf("\nInput ID      :");scanf("%d",&id[i]);
                        printf("Input Name    :");fflush(stdin);gets(name[i]);
                        printf("Input Gender  :");gets(gender[i]);
                        printf("Input Score 1 :");scanf("%f",&score1[i]);
                        printf("Input Score 2 :");scanf("%f",&score2[i]);
                        printf("Input Score 3 :");scanf("%f",&score3[i]);
                        total[i] = score1[i] + score2[i] + score3[i];
                        avg[i] = total[i]/3;
                        if(avg[i] > 90 && avg[i] <= 100 ){
                            grade[i] = 'A';
                        }else if (avg[i] > 80 && avg[i] <= 90)
                        {
                            grade[i] = 'B';
                        }else if (avg[i] > 70 && avg[i] <= 80)
                        {
                            grade[i] = 'C';
                        }else if (avg[i] > 60 && avg[i] <= 70)
                        {
                            grade[i] = 'D';
                        }else if (avg[i] >= 50 && avg[i] <= 60)
                        {
                            grade[i] = 'E';
                        }else{
                            if(avg[i] >=0 && avg[i] < 50){
                                grade[i] = 'F';
                            }
                        } 
                    }
                }break;
                case 'b':
                case 'B':{
                    printf("\n %12s %14s %16s %16s %16s %16s %15s %13s %15s\n","ID","Name","Gender","Score1","Score2","Score3","Total","Avg","Grade");
                    for(i=0;i<n;i++){
                    printf(" %12d %14s %16s %16.2f %16.2f %16.2f %15.2lf %13.2lf %15c\n",id[i],name[i],gender[i],score1[i],score2[i],score3[i],total[i],avg[i],grade[i]);
                    }
                }break;
                case 'c':
                case 'C':{
                    int op1;
                    do{
                        printf("\n____________________| Option Search |____________________\n");
                        printf(" 1. Search By ID \n");
                        printf(" 2. Search By Name \n");
                        printf(" 3. Exit \n");
                        printf("Please Select One Option :");scanf("%d",&op1);
                        switch(op1){
                            case 1:{
                                int sid;
                                printf("Input Student's ID To Search :");
                                scanf("%d",&sid);
                                for(i=0;i<n;i++){
                                    if(sid == id[i]){
                                        printf("\n %12d %14s %16s %16.2f %16.2f %16.2f %15.2lf %13.2lf %15c\n",id[i],name[i],gender[i],score1[i],score2[i],score3[i],total[i],avg[i],grade[i]);
                                    }
                                }
                            }break;
                            case 2:{
                                char sname[30];
                                printf("Input Student's Name To Search :");
                                fflush(stdin);gets(sname);
                                for(i=0;i<n;i++){
                                    if(strcmp(sname,name[i])==0){      // stricmp
                                        printf("\n %12d %14s %16s %16.2f %16.2f %16.2f %15.2lf %13.2lf %15c\n",id[i],name[i],gender[i],score1[i],score2[i],score3[i],total[i],avg[i],grade[i]);
                                    }
                                }
                            }break;
                        }
                    }while(op1 != 3);      
                }break;
                case 'd':
                case 'D':{
                    int sid;
                    printf("Input Student's ID For Search :");
                    scanf("%d",&sid);
                    for(i=0; i<n; i++){
                        if(sid == id[i]){
                                printf("\nInput ID      :");scanf("%d",&id[i]);
                                printf("Input Name    :");fflush(stdin);gets(name[i]);
                                printf("Input Gender  :");gets(gender[i]);
                                printf("Input Score 1 :");scanf("%f",&score1[i]);
                                printf("Input Score 2 :");scanf("%f",&score2[i]);
                                printf("Input Score 3 :");scanf("%f",&score3[i]);
                                total[i] = score1[i] + score2[i] + score3[i];
                                avg[i] = total[i]/3;
                                if(avg[i] > 90 && avg[i] <= 100 ){
                                    grade[i] = 'A';
                                }else if (avg[i] > 80 && avg[i] <= 90){
                                    grade[i] = 'B';
                                }else if (avg[i] > 70 && avg[i] <= 80){
                                    grade[i] = 'C';
                                }else if (avg[i] > 60 && avg[i] <= 70){
                                    grade[i] = 'D';
                                }else if (avg[i] >= 50 && avg[i] <= 60){
                                    grade[i] = 'E';
                                }else{
                                    if(avg[i] >=0 && avg[i] < 50){
                                        grade[i] = 'F';
                                    }
                                } 
                        }
                    }
                }break;
                case 'e':
                case 'E':{
                    int sid;
                    printf("Input Student's ID To Search For Delete :");scanf("%d",&sid);
                    for(i=0;i<n;i++){
                        if(sid == id[i]){
                            for(j=i;j<n-1;j++){
                                id[j]       =  id[j+1];
                                strcpy(name[j] , name[j+1]);
                                strcpy( gender[j] , gender[j+1]);
                                score1[j]   =  score1[j+1];
                                score2[j]   =  score2[j+1];
                                score3[j]   =  score3[j+1];
                                total[j]    =  total[j+1];
                                avg[j]      =  avg[j+1];
                                grade[j]    =  grade[j+1];
                            }
                            n--; // n = n-1;
                            b=1;
                            printf("Delete Successful ..!\n");
                        }
                    }
                    if(b == 0){
                        printf("Delete Is Not Found ..!\n");
                    }
                }break;
                case 'f':
                case 'F':{
                    char sname[30];
                    printf("Input Student's Name To Search For Insert :");fflush(stdin);gets(sname);
                    for(i=0;i<n;i++){
                        if(strcmp(sname,name[i])==0){
                            for(j=n;j>i-1;j--){        
                                id[j]       =  id[j-1];
                                strcpy(name[j] , name[j-1]);
                                strcpy( gender[j] , gender[j-1]);
                                score1[j]   =  score1[j-1];
                                score2[j]   =  score2[j-1];
                                score3[j]   =  score3[j-1];
                                total[j]    =  total[j-1];
                                avg[j]      =  avg[j-1];
                                grade[j]    =  grade[j-1];
                            }
                            n++; // n = n + 1;
                                    printf("\nInput ID      :");scanf("%d",&id[i]);
                                printf("Input Name    :");fflush(stdin);gets(name[i]);
                                printf("Input Gender  :");gets(gender[i]);
                                printf("Input Score 1 :");scanf("%f",&score1[i]);
                                printf("Input Score 2 :");scanf("%f",&score2[i]);
                                printf("Input Score 3 :");scanf("%f",&score3[i]);
                                total[i] = score1[i] + score2[i] + score3[i];
                                avg[i] = total[i]/3;
                                if(avg[i] > 90 && avg[i] <= 100 ){
                                    grade[i] = 'A';
                                }else if (avg[i] > 80 && avg[i] <= 90){
                                    grade[i] = 'B';
                                }else if (avg[i] > 70 && avg[i] <= 80){
                                    grade[i] = 'C';
                                }else if (avg[i] > 60 && avg[i] <= 70){
                                    grade[i] = 'D';
                                }else if (avg[i] >= 50 && avg[i] <= 60){
                                    grade[i] = 'E';
                                }else{
                                    if(avg[i] >=0 && avg[i] < 50){
                                        grade[i] = 'F';
                                    }
                                } 
                            b = 1;
                            printf("Insert Is Successful ..!\n");
                            break;
                        }
                    }
                    if(b == 0){
                        printf("Search Is Not Found ..!\n");
                    }
                }break;
                case 'g':
                case 'G':{
                    int temp;
                    char temp1[20];
                    float temp2;
                    double temp3;
                    for(i=0;i<n;i++){
                        for(j=i+1;j<n;j++){
                            if(id[i]>id[j]){
                                temp  = id[i];
                                id[i] = id[j];
                                id[j] = temp;

                                strcpy(temp1 , name[i]);
                                strcpy(name[i] , name[j]);
                                strcpy(name[j] , temp1);

                                strcpy(temp1 ,gender[i]);
                                strcpy(gender[i] ,gender[j]);
                                strcpy(gender[j] , temp1);

                                strcpy(temp1   , grade[i]);
                                strcpy(grade[i] , grade[j]);
                                strcpy(grade[j] ,temp1);

                                temp2     = score1[i];
                                scorer1[i] = score1[j];
                                score1[j]  = temp2;

                                 temp2     = score2[i];
                                scorer2[i] = score2[j];
                                score2[j]  = temp2;

                                 temp2     = score3[i];
                                scorer3[i] = score3[j];
                                score3[j]  = temp2;

                                temp3     = total[i];
                                total[i]  = total[j];
                                total[j]  = temp3;

                                temp3     =  avg[i];
                                avg[i]    =  avg [j];
                                avg[j]    =  temp3;
                            }
                        }
                    }
                    printf("Sort is Comleted ..!\n");
                }break;
                case 'h':
                case 'H':{
                    int m;
                    printf("Input Element of Student's To  ADD :");
                    scanf("%d",&m);
                    for(i=n;i<n+m;i++){
                        printf("\nInput ID      :");scanf("%d",&id[i]);
                        printf("Input Name    :");fflush(stdin);gets(name[i]);
                        printf("Input Gender  :");gets(gender[i]);
                        printf("Input Score 1 :");scanf("%f",&score1[i]);
                        printf("Input Score 2 :");scanf("%f",&score2[i]);
                        printf("Input Score 3 :");scanf("%f",&score3[i]);
                        total[i] = score1[i] + score2[i] + score3[i];
                        avg[i] = total[i]/3;
                        if(avg[i] > 90 && avg[i] <= 100 ){
                            grade[i] = 'A';
                        }else if (avg[i] > 80 && avg[i] <= 90)
                        {
                            grade[i] = 'B';
                        }else if (avg[i] > 70 && avg[i] <= 80)
                        {
                            grade[i] = 'C';
                        }else if (avg[i] > 60 && avg[i] <= 70)
                        {
                            grade[i] = 'D';
                        }else if (avg[i] >= 50 && avg[i] <= 60)
                        {
                            grade[i] = 'E';
                        }else{
                            if(avg[i] >=0 && avg[i] < 50){
                                grade[i] = 'F';
                            }
                        } 
                    }
                    n = n+m;
                    printf("Add Is Completed ..!\n");
                }break;
                case 'i':
                case 'I':{
                    exit(0);
                }break;
            }
            printf("\nPress Enter To Go\n");
        }while(getchar()==10);  // getch() == 13  DIV 
    return 0;
} 