#include <stdio.h>

int main() {
   int i, n;
printf("Enter the range: ");
scanf("%d",&n);

   for(i = 2; i <= n; i += 2) {
      printf("%d ", i);
   }


   return 0;
}