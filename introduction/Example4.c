#include<stdio.h>
#include<stdlib.h>
int main(){
    // system("clear");
    int id;
    char name1[20],name2[20],name3[30];
    float scor2;
    printf("Input ID    :");scanf("%d",&id);
    printf("Input Name1 :");scanf("%s",&name1);
    printf("Input Name2 :");fflush(stdin);scanf("%s",&name2);
    printf("Input Name3 :");fflush(stdin);scanf("%s",&name3);
    printf("Input Float :");fflush(stdin);scanf("%f",&scor2);
    

    printf("\nOutput ID  :%d\n",id);
    printf("Output Name1 :%s\n",name1);
    printf("Output Name2 :%s\n",name2);
    printf("Output Name3 :%s\n",name3);
    printf("Output Score :%f\n",scor2);
    return 0;
}