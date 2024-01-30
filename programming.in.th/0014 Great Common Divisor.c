#include <stdio.h>

int gcd(int m, int n){
    if (m == 0){
        return n;
    }
    if (m < n){
        n = n - m;
    }
    else {
        m = m - n;
    }
    gcd(m, n);
}

int main(){
    int a, b;
    scanf("%i%i", &a, &b);
    printf("%i", gcd(a, b));
}