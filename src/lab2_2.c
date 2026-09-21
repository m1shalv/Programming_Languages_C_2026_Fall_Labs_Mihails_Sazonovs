#include <stdio.h>
#include <string.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

void multiplyString(char num[], int factor){
    int len = strlen(num);
    int carry = 0;

    for (int i = len-1; i>=0; i--){
        int digit = num[i] - '0';
        int product = digit * factor + carry;

        num[i] = (product %10) +'0';
        carry = product /10;
    }

    while(carry){
        for (int i = strlen(num); i >=0; i--){
            num[i+1] = num[i];
        }
        num[0]= (carry%10) +'0';
        carry /= 10; 
    } 
}

void factorial(int n) {
    // TODO: compute factorial iteratively
    char fact[1000];

    strcpy(fact , "1"); 

    for(int i = 2; i<=n; i++){
        multiplyString(fact, i);
    }

    printf("Factorial of %d is %s\n", n, fact);
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    factorial(n);

    // TODO: validate input, call function, print result

    return 0;
}
