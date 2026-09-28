#include <stdio.h>
int sum_to_n(int n) {
    int sum=0;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    return sum;
    return 0; // placeholder
}

int main(void) {
    int n;
    while(1){

    printf("Enter a positive integer n: ");
    if(scanf("%d", &n) != 1){
        printf("Error: enter the number \n");
        while (getchar() != '\n');
        continue;
    }

    if(n <1){
        printf("Error: number must be at least 1\n");
        continue;
    }

    break;
    // TODO: validate input, call function, and print result
    }

    printf("Sum of numbers: %d\n", sum_to_n(n));
    return 0;
}
