#include <stdio.h>

int main(){
    int a[5][4];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            scanf("%i", &a[i][j]);
        }
    }
    int n = 0, max = 0;
    for (int i = 0; i < 5; i++){
        int score = 0;
        for (int j = 0; j < 4; j++){
            score += a[i][j];
        }
        if (score > max){
            max = score;
            n = i+1;
        }
    }

    printf("%i %i", n, max);
}