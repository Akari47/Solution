#include <stdio.h>

int main(){
    int a[3], b[3];
    for (int i = 0; i < 3; i++){
        scanf("%i", &a[i]);
    }
    for (int i = 0; i < 3; i++){
        char order;
        scanf(" %c", &order);
        if (order == 'A'){
            b[i] = 0;
        }
        if (order == 'B'){
            b[i] = 1;
        }
        if (order == 'C'){
            b[i] = 2;
        }  
    }
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++){
            printf("%i ", a[b[i]]);
    }
} 