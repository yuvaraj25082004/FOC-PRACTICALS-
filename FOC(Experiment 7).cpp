#include <stdio.h>

int main() {
    int n, sum=0;
    printf("Enter the limit of the series: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i+=2) {
        sum += i;
    }
    
    printf("Sum of even numbers in the series: %d", sum);
    return 0;
}
