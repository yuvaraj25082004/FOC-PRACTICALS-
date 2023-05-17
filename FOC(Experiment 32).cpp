#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char num_str[5];
    int num, sum = 0, check_digit;
    
    printf("Enter a four-digit number: ");
    if (scanf("%d", &num) != 1 || num < 1000 || num > 9999) {
        printf("Invalid input.\n");
        exit(1);
    }
    
    sprintf(num_str, "%d", num);
    
    for (int i = 0; i < strlen(num_str); i++) {
        sum += num_str[i] - '0';
    }
    
    if (sum % 2 == 0) {
        check_digit = 0;
    } else {
        check_digit = 1;
    }
    
    printf("Original number: %d\n", num);
    printf("New number: %s%d\n", num_str, check_digit);
    
    return 0;
}