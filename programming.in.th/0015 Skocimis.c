#include <stdio.h>

int main(){
   int a, b, c, delta, n = 0;
   scanf("%i%i%i", &a, &b, &c);
   if (c - b > b - a){
       n = c - b - 1;
   }
   else {
       n = b - a - 1;
   }
    printf("%i", n);
}