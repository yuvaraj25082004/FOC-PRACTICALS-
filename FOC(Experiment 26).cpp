#include <stdio.h>

int main() {
    int n, i;
    int largest, num;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter integer 1: ");
    scanf("%d", &largest);


    for (i = 2; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);


        if (num > largest) {
            largest = num;
        }
    }


    printf("The largest integer is: %d\n", largest);

    return 0;
}