#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    while(num != 0){
        int digits = num % 10;
        num = num / 10;
        printf("%d\n", digits);
    }
  
    return 0;
}