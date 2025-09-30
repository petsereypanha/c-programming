#include<stdio.h>
#include<time.h>

long fact(const int n) {
    long result=1;
    int i=0;
    for(i=1; i<=n; i++) {
        i *= (i+1);
    }
}

int main() {
    double duration = 0;
    clock_t start, end;
    
    start = clock();
    
    fact(7);

    end = clock();

    
    duration = ((double)end - start)/CLOCKS_PER_SEC;
    printf("Time taken to execute in seconds : %f", duration);
    return 0;
}