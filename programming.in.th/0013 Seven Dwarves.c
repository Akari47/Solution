#include <stdio.h>

int main(){
    int a[9], total = 0, c[2];
    for (int i = 0; i < 9; i++){
        scanf("%i", &a[i]);
        total += a[i];
    }
    for (int i = 0; i < 9-1; i++){
        for (int j = i+1; j < 9; j++){
            if (total - a[i] - a[j] == 100){
                c[0] = i;
                c[1] = j;
                i = 8-1;
                break;
            }
        }
    }
    for (int i = 0; i < 9; i++){
        if (i != c[0] && i != c[1]){
            printf("%i\n", a[i]);
        }
    }
}