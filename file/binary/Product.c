#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Product
{
    int code,qty;
    char name[20];
    float price,payment;
};
int main(){
    int n,op;
    bool b = false;
    int scode;
    struct Product pro;
    FILE *fp;
    FILE *temp;
    Again:
        printf("\n 1. Write File  \n");
        printf(" 2. Read File   \n");
        printf(" 3. Search Data \n");
        printf(" 4. Upadte Data \n");
        printf(" 5. Delete Data \n");
        printf(" 6. Insert Data \n");
        printf(" 7. Exit        \n");
        printf("Please Select One Option :");
        scanf("%d",&op);
        switch(op){
            case 1:{
                int i;
                fp = fopen("Product.bin","wb");
                if(!fp){
                    printf("Unable To Open File !\n");
                    exit(0);
                }
                printf("Input Element Of Droduct :");
                scanf("%d",&n);
                for(i=0;i<n;i++){
                    printf("\n=======| Product #%d |==========\n",i);
                    printf("Input Code    :");scanf("%d",&pro.code);
                    printf("Input Qty     :");scanf("%d",&pro.qty);
                    printf("Input Name    :");fflush(stdin);gets(pro.name);
                    printf("Input Price   :");scanf("%f",&pro.price);
                    pro.payment = pro.price * pro.qty;
                    fwrite(&pro,sizeof(struct Product),1,fp);
                }
                fclose(fp);
            }break;
            case 2:{
                int i=1;
                fp = fopen("Product.bin","rb");
                if(!fp){
                    printf("Unable To Open File !\n");
                    exit(0);
                }
                while (1==fread(&pro,sizeof(struct Product),1,fp)){
                    printf("\n=======| Product #%d |==========\n",i);
                    printf("ID      :%d\n",pro.code);
                    printf("Qty     :%d\n",pro.qty);
                    printf("Name    :%s\n",pro.name);
                    printf("Price   :%.2f\n",pro.price);
                    printf("Payment :%.2f\n",pro.payment);
                    i++;
                }
                fclose(fp);
            }break;
            case 3:{
                int i,scode;
                bool b = false;
                fp = fopen("Product.bin","rb");
                if(!fp){
                    printf("Unable To Open File !\n");
                    exit(0);
                }
                printf("Input Product's Code To Search :");
                scanf("%d",&scode);
                while(1==fread(&pro,sizeof(struct Product),1,fp)){
                    if(scode==pro.code){
                        printf("\n=======| Product #%d |==========\n",i+1);
                        printf("ID      :%d\n",pro.code);
                        printf("Qty     :%d\n",pro.qty);
                        printf("Name    :%s\n",pro.name);
                        printf("Price   :%.2f\n",pro.price);
                        printf("Payment :%.2f\n",pro.payment);
                        i++;
                        b=true;
                    }
                }
                if(b==false){
                    printf("Search is not Found ..!\n");
                    exit(0);
                }
            }break;
            case 4:{
                int i,j;
                fp = fopen("Product.bin","rb");
                if(!fp){
                    printf("Unable To Open File !\n");
                    exit(0);
                }
                temp = fopen("Temp.bin","wb");
                if(temp==NULL){
                    printf("Unable To Open File !\n");
                    exit(0); 
                }
                printf("Input Product's Code To Search For Upadte :");
                scanf("%d",&scode);
                while(1==fread(&pro,sizeof(struct Product),1,fp)){
                    if(scode==pro.code){
                        for(j=n;i>n;j--){
                            printf("Input Code    :");scanf("%d",&pro.code);
                            printf("Input Qty     :");scanf("%d",&pro.qty);
                            printf("Input Name    :");fflush(stdin);gets(pro.name);
                            printf("Input Price   :");scanf("%f",&pro.price);
                            pro.payment = pro.price * pro.qty;
                            fwrite(&pro,sizeof(struct Product),1,temp);
                            b=true;
                            printf("Update Is Completed ..!\n");
                        }
                    }else{
                        fwrite(&pro,sizeof(struct Product),1,temp);
                    }
                    i++;
                }
                if(b==false){
                    printf("Search is Not Found ..!\n");
                    exit(0);
                }
                fclose(fp);
                fclose(temp);
                remove("Product.bin");
                rename("Temp.bin","Product.bin");
            }break;
            case 5:{
                int i;
                fp = fopen("Product.bin","rb");
                if(!fp){
                    printf("Unable To Open File !\n");
                    exit(0);
                }
                temp = fopen("Temp.bin","wb");
                if(!temp){
                    printf("Unable To Open File !\n");
                    exit(0);
                }
                printf("Input Product's Code To Search :");
                scanf("%d",&scode);
                while(1==fread(&pro,sizeof(struct Product),1,fp)){
                    if(scode==pro.code){
                        printf("Deleted Completed ..!\n");
                        b=true;
                    }else{
                        fwrite(&pro,sizeof(struct Product),1,temp);
                    }
                  i++;
                }
                if(b==false){
                    printf("Search is Found ..!\n");
                }
                fclose(fp);
                fclose(temp);
                remove("Product.bin");
                rename("Temp.bin","Product.bin");
            }break;
            case 6:{
                int i;
                fp = fopen("Product.bin","rb");
                if(!fp){
                    printf("Unable To Open File !\n");
                    exit(0);
                }
                temp = fopen("Temp.bin","wb");
                if(!temp){
                    printf("Unable To Open File !\n");
                    exit(0);
                }
                printf("Input Product's Code To Search For Update :");
                scanf("%d",&scode);
                while(1==fread(&pro,sizeof(struct Product),1,fp)){
                    if(scode==pro.code){
                        printf("Input Code    :");scanf("%d",&pro.code);
                        printf("Input Qty     :");scanf("%d",&pro.qty);
                        printf("Input Name    :");fflush(stdin);gets(pro.name);
                        printf("Input Price   :");scanf("%f",&pro.price);
                        pro.payment = pro.price * pro.qty;
                        fwrite(&pro,sizeof(struct Product),1,fp);
                        b=true;
                        printf("Insert Is Completed ..!\n");
                    }
                    i++;
                }
                if(b==false){
                    printf("Search Is Not Found ..!\n");
                    exit(0);
                }
                fclose(fp);
                fclose(temp);
                remove("Product.bin");
                rename("Temp.bin","Product.bin");
            }break;
            case 7:{
                exit(0);
            }break;
        }
    if(op!=7) goto Again;
    return 0;
}