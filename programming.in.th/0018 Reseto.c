#include <stdio.h>
int main(){
    int N, K, n = 0, x;
    scanf("%i %i", &N, &K);
    int a[N];
    for (int i =0; i < N; i++){
        a[i] = i + 1;
    }
    for (int i = 1; i < N; i++){
        int d = a[i];
        if (d == 0){
            continue;
        }
        for (int j = 0; j < N; j++){
            if (a[j] != 0 && a[j] % d == 0){
                n++;
                if (n == K){
                    x = a[j];
                    i = N;
                    break;
                }
                a[j] = 0;
            }
        }
    }
    printf("%i", x);
}