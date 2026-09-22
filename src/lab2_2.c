#include <stdio.h>

long long factorial(int n){
    long long result = 1;
    for(int i = 1; i<=n; i++){
        result *=i; 
    }
    return result;
}
    
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n<0){
        printf("Error: numer must be positive\n");
    }else{
        printf("Factorial is: %lld\n", factorial(n));
    }
    return 0;
}