#include <stdio.h>

int main() {
    int n, sum = 0, sign = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += sign * i;
        sign = -sign;
    }
    
    printf("The sum of the series is %d.\n", sum);
    
    return 0;
}