#include <stdio.h>

int main(){
    int n = 0, a, b[10];
    for (int i = 0; i < 10; i++){
        scanf("%i", &a);
        b[i] = a % 42;
    }
    for (int i = 0; i < 10; i++){
        if (b[i] == 42){
            continue;
        }
        for (int j = i+1; j < 10; j++){
            if (b[i] == b[j]){
                b[j] = 42;
            }
        }
        n++;
    }
    printf("%i", n);
}