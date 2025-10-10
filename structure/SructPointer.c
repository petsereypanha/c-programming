#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// #include<conio.h>
struct Employee{     // Product 
    int id;
    char name[20],gender[10];
    float salary;
}*emp,temp;
int i,j,n,sid;
void Input(struct Employee *emp,int n);
void Header();
void Output(struct Employee *emp,int n);
int  Search(struct Employee *emp);
void Update(struct Employee *emp);
void Delete(struct Employee *emp);
void Insert(struct Employee *emp);
void Sort(struct Employee *emp);
int main(){
    char op;
    do{
        printf("\n A. Input  \n");
        printf(" B. Output \n");
        printf(" C. Search \n");
        printf(" D. Update \n");
        printf(" E. Delete \n");
        printf(" F. Insert \n");
        printf(" G. Sort   \n");
        printf(" H. Exit   \n");
        printf(" Please Select One Option  :");
        fflush(stdin);scanf("%c",&op);    
        switch (op){
            case 'A':
            case 'a':{
                printf("\n Input Element Of Employee :");
                scanf("%d",&n);
                emp = (struct Employee *)calloc(n,sizeof(struct Employee));  // malloc
                for(i = 0; i < n; i++){
                    Input(emp,i);
                }
            }break;
            case 'B':
            case 'b':{
                Header();
                for(i = 0; i < n; i++){
                    Output(emp,i);
                }
            }break;
            case 'C':
            case 'c':{
                int index = Search(emp);   
                if(index == -1){
                    printf("Search IS Not Found ..!\n");
                }else{
                    Header();  
                    Output(emp,index);                     
                }
            }break;
            case 'D':
            case 'd':{
                Update(emp);
            }break;
            case 'E':
            case 'e':{
                Delete(emp);
            }break;
            case 'F':
            case 'f':{
                Insert(emp);
            }break;
            case 'G':
            case 'g':{
                Sort(emp);
            }break;
            case 'H':
            case 'h':{
                exit(0);
            }break;
        }
    }while(getchar()==10);   // getch() == 13
    free(emp);
    return 0;
}
void Input(struct Employee *emp,int n){
    printf("\n Input ID     :");scanf("%d",&(emp+n)->id);
    printf(" Input Name   :");fflush(stdin);gets((emp+n)->name);
    printf(" Input Gender :");fflush(stdin);gets((emp+n)->gender);
    printf(" Input Salary :");scanf("%f",&(emp+n)->salary);
}
void Header(){
    printf("\n%12s %14s %16s %16s\n","ID","Name","Gender","Salary");
}
void Output(struct Employee *emp,int n){
    printf("%12d %14s %16s %15.2f$\n",(emp+n)->id,(emp+n)->name,(emp+n)->gender,(emp+n)->salary);
}
int Search(struct Employee *emp){
    int index = -1, sid;                                  // index Array = 0 1 2 ..
    printf("\n Input ID To Saerch :");scanf("%d",&sid);
    for( i = 0; i < n; i++){
        if(sid == (emp+i)->id){
            index = i;       // index 2 
        }
    }
    return index; 
}
void Update(struct Employee *emp){
    int index = Search(emp);
    if(index == -1){
        printf("Search IS Not Found ..!\n");
    }else {
        Input(emp,index);
        printf(" Update Is Successful ..!\n");
    }
}
void Delete(struct Employee *emp){
    int index = Search(emp);
    if(index == -1){
        printf("Search IS Not Found ..!\n");
    }else{
        for(j = index; j < n-1; j++){
            emp[j] = emp[j+1];
        }
        n--;
        printf("Delete Is Complete ..!\n");
    }
}
void Insert(struct Employee *emp){
    int index = Search(emp);
    if(index == -1){
        printf("Search IS Not Found ..!\n");
    }else{
        for ( j = n ; j > index ; j--){
            emp[j] = emp[j-1];
        }
        Input(emp,index);
        n++;
        printf("Insert Is Complete ..!\n");
    }
}
void Sort(struct Employee *emp){
    for( i = 0; i < n-1; i++){
        for( j = i+1; j < n; j++){
            if(emp[i].salary > emp[j].salary){
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
    printf("\n Sort Is Successful  ..! \n");
}