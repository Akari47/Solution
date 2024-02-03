#include <stdio.h>

int main(){
    int a[4];
    for (int i = 0; i < 4; i++){
        scanf("%i", &a[i]);
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3 - i; j++){
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("%i", a[0] * a[2]);
}