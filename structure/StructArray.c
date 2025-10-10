#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// #include<conio.h>
struct Product{
    int code,qty,discount;
    char name[20];
    float price;
    double total,payment;
};
void Input(struct Product pro[20], int i);
void Header();
void Output(struct Product pro[20], int i);
int main(){
    struct Product pro[20];
    struct Product temp;
    int scode;
    char sname[20];
    int n,i,j,op1,b=0,m;
    char op;
    do{
        printf("\nA. Input  \n");
        printf("B. Output \n");
        printf("C. Search \n");
        printf("D. Update \n");
        printf("E. Delete \n");
        printf("F. Insert \n");
        printf("G. Sort   \n");
        printf("H. Add    \n");
        printf("I. Min  By  Payment  \n");
        printf("J. Max  By  Payment \n");
        printf("K. Cash Recieve \n");
        printf("L. Exit \n");
        printf("Please Select One Option :");
        scanf("%c",&op);
        switch (op){
            case 'A':
            case 'a':{
                printf("\nInput Element Of Product :");
                scanf("%d",&n);
                for(i=0; i<n ; i++){
                    Input(pro,i);
                }
            }break;
            case 'B':
            case 'b':{
                Header();
                for(i=0; i<n ; i++){
                    Output(pro,i);
                }
            }break;
            case 'C':
            case 'c':{
                Again:{
                    printf(" 1. Search By Code   \n");
                    printf(" 2. Search By Name   \n");
                    printf(" 3. Goto Main Option \n");
                    printf(" Please Choose One Option :");
                    scanf("%d",&op1);
                    switch (op1){
                        case 1:{
                            printf("\nInput Code To Search :");
                            scanf("%d",&scode);
                            for(i=0; i<n; i++){
                                if(scode == pro[i].code){
                                    Header();
                                    Output(pro,i);
                                    b=1;
                                }
                            }
                            if(b==0){
                                printf("Search Is Not Found ...\n");
                            }
                        }break;
                        case 2:{
                            printf("\nInput Name To Search :");
                            fflush(stdin);gets(sname);
                            for(i=0; i<n; i++){
                                if(strcmp(sname,pro[i].name)==0){
                                    Header();
                                    Output(pro,i);
                                    b=1;
                                }
                            }
                            if(b==0){
                                printf("Search Is Not Found ...\n");
                            }
                        }break;
                    }
                }if(op != 3) goto Again;
            }break;
            case 'D':
            case 'd':{
                printf("\nInput Code To Search For Update  :");
                scanf("%d",&scode);
                for(i=0; i<n; i++){
                    if(scode == pro[i].code){
                        Input(pro,i);
                        b=1;
                        printf("\nUpdate Is Successful ..!\n");
                    }
                }
                if(b == 0){
                    printf("Search Is Noot found ...!\n");
                }
            }break;
            case 'E':
            case 'e':{
                printf("\nInput Code To Search For Delete :");
                scanf("%d",&scode);
                for(i=0; i<n; i++){
                    if(scode == pro[i].code){
                        for(j=i; j<n-1 ; j++){
                            pro[j]  = pro[j+1];
                        }
                        n--;
                        b=1;
                        printf("Delete Successful ..!\n");
                    }
                }
                if(b == 0){
                    printf("Search Is Noot found ...!\n");
                }
            }break;
            case 'F':
            case 'f':{
                printf("\nInput Name To Search For Insert:");
                fflush(stdin);gets(sname);
                for(i=0; i<n; i++){
                    if(strcmp(sname,pro[i].name)==0){
                        for(j=n; j>i-1 ; j--){
                            pro[j] = pro[j-1];
                        }
                        n++;
                        Input(pro,i);
                        b=1;
                        printf("Insert Is Completed ..!\n");
                        break;
                    }
                }
                if(b == 0){
                    printf("Search Is Noot found ...!\n");
                }
            }break;
            case 'G':
            case 'g':{
                for(i=0; i<n ; i++){
                    for(j=i+1; j<n; j++){
                        if(pro[i].code > pro[j].code){
                            temp = pro[i];
                            pro[i] = pro[j];
                            pro[j] = temp;
                        }
                    }
                }
                printf("\nSort Is Successful ..!\n");
            }break;
            case 'H':
            case 'h':{
                printf("Input Element Of Product To Add :");
                scanf("%d",&m);
                for(i=n; i<n+m; i++){
                    Input(pro,i);
                }
                printf("Add Is Successful ..!\n");
            }break;
            case 'I':
            case 'i':{
                for(i=0; i<n; i++){
                    if(pro[i].payment < pro[0].payment){
                            pro[0] = pro[i];
                    }
                }
                Header();
                printf("%14d %14s %13d %15.2f %18d %15.2lf %16.2lf$\n",pro[0].code,pro[0].name,pro[0].qty,pro[0].price,pro[0].discount,pro[0].total,pro[0].payment);
            }break;
            case 'J':
            case 'j':{
                for(i=0; i<n; i++){
                    if(pro[i].payment > pro[0].payment){
                            pro[0] = pro[i];
                    }
                }
                Header();
                printf("%14d %14s %13d %15.2f %18d %15.2lf %16.2lf$\n",pro[0].code,pro[0].name,pro[0].qty,pro[0].price,pro[0].discount,pro[0].total,pro[0].payment);
            }break;
            case 'K':
            case 'k':{
                char op_pay[10];
                double All_Payment,cash_real,cash_usd,resive;
                for(i=0; i<n; i++){
                    All_Payment += pro[i].payment;  //  All_Payment = All_Payment + pro[i].payment;
                }
                printf("\nAmout [%.2lf] USD\n",All_Payment);
                printf("Amout [%.2lf] KHR\n",All_Payment*4100);
                printf("Please Choose Payment KHR or USD :");fflush(stdin);gets(op_pay);
                if(strcmp(op_pay,"KHR")==0){    // stricmp
                    printf("\n  Money Payment:");scanf("%lf",&cash_real);
                    resive = All_Payment*4100 - cash_real;
                    printf("  Money After Payment : %.2lf KHR\n",-resive);
                }
                if(strcmp(op_pay,"USD")==0){    // stricmp
                    printf("\n  Money Payment:");scanf("%lf",&cash_usd);
                    resive = All_Payment - cash_usd;
                    printf("  Money After Payment : %.2lf USD\n",-resive);
                }
                exit(0);
            }break;
            case 'L':
            case 'l':{
                exit(0);
            }break;
        }
        printf("\n Press Enter To Continue ..!\n");
    }while(getchar() == 10);    //   getch() == 13
    return 0;
}
void Input(struct Product pro[20], int i){
    printf("\n Input Code   [%d] :",i+1);scanf("%d",&pro[i].code);
    printf(" Input Name   [%d] :",i+1);fflush(stdin);gets(pro[i].name);
    printf(" Input Qty    [%d] :",i+1);scanf("%d",&pro[i].qty);
    printf(" Input Price  [%d] :",i+1);scanf("%f",&pro[i].price);

    pro[i].total = pro[i].qty * pro[i].price;

    if(pro[i].total > 0 && pro[i].total <= 100){
        pro[i].discount = 10;
    }else if(pro[i].total > 100 && pro[i].total <=300){
        pro[i].discount = 20;
    }else if(pro[i].total > 300 && pro[i].total <=500){
        pro[i].discount = 25;
    }else{
        pro[i].discount = 30;=
    }

    pro[i].payment = ( pro[i].total )- (pro[i].total * pro[i].discount)/100;
}
void Header(){
    printf("\n%14s %14s %13s %15s %18s %15s %17s\n\n","Code","Name","Qty","Price","Discount","Total","Payment");
}
void Output(struct Product pro[20], int i){
    printf("%14d %14s %13d %15.2f %18d %15.2lf %16.2lf$\n",pro[i].code,pro[i].name,pro[i].qty,pro[i].price,pro[i].discount,pro[i].total,pro[i].payment);
}