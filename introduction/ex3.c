#include<stdio.h>
int main(){
    float score1,score2,score3,score4,score5;
    double total,avg;
    printf("Input Score  1 :");scanf("%f",&score1);  // 20  //   scanf("%d",&code);
    printf("Input Score  2 :");scanf("%f",&score2);  // 30
    printf("Input Score  3 :");scanf("%f",&score3);  // 40
    printf("Input Score  4 :");scanf("%f",&score4);  // 50
    printf("Input Score  5 :");scanf("%f",&score5);  // 90
    total = score1+score2+score3+score4+score5;
//   230    =  20   +  30 +   40 +   50  + 90;
    avg = total/5;    
//   46  = 230/5;
    printf("\n %.2f\n",score1);
    printf(" %.2f\n",score2);           //   printf ("%d",code);
    printf(" %.2f\n",score3);
    printf(" %.2f\n",score4);
    printf(" %.2f\n",score5);
    printf(" %.2lf\n",total); 
    printf(" %.2lf\n",avg);
    return 0;
}