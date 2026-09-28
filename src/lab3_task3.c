/*
 * Lab 3, Task 3
 * Name: Miahils Sazonovs
 * Student ID: 251RDC077
 */

#include <stdio.h>


int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
    char test[] = "Programming in C";
    char copy[100];

    int len = my_strlen(test);
    printf("Length: %d\n", len);

    my_strcpy(copy, test);
    printf("Copy: %s\n", copy);

    return 0;
}

int my_strlen(const char *str) {
    int length = 0;
    while(*str != '\0'){
        length++;
        str++;
    }
    return length; 
}

void my_strcpy(char *dest, const char *src) {
    do{
        *dest = *src;
        src++;
        dest++;
    }
    while(*src != '\0');
}
