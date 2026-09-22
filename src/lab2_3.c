#include <stdbool.h>
#include <stdio.h>

int main()
{
    int number; 
    printf("Enter number:");
    if(scanf("%d", &number)!= 1 || number <2){
        printf("Error: number must be bigger than 2\n");
    }
    
    for(int i = 2; i<=number; i++){
        bool isPrime = true; 
        for(int j = 2; j<=i-1; j++){
            if(i%j == 0){
                isPrime = false;
                break; 
                }
            }
        if(isPrime){
            printf("Prime number is: %d\n", i);
            }
        }
    
    return 0;
}