#include <stdio.h>

int main(){
    char a[15], temp;
    int n = 0;
    temp = getchar();
    while (temp >= 'A' && temp <= 'Z'){
        a[n] = temp; 
        temp = getchar();
        n++;
    }
    for (int i = 0; i < n; i++){
        if ((i % 3) == 2){
            printf("..*.");
        }
        else {
            printf("..#.");
        }
    }
    printf(".\n");
    for (int i = 0; i < n; i++){
        if ((i % 3) == 2){
            printf(".*.*");
        }
        else {
            printf(".#.#");
        }        
    }
    printf(".\n#");
    for (int i = 0; i < n; i++){
        if ((i % 3) == 0){
            printf(".%c.#", a[i]);
        }
        else {
            printf(".%c.", a[i]);
            if (i == n-1 && n % 3 == 2){
                printf("#");
            }
            else {
                printf("*");
            }
        }        
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        if ((i % 3) == 2){
            printf(".*.*");
        }
        else {
            printf(".#.#");
        }        
    }
    printf(".\n");
        for (int i = 0; i < n; i++){
        if ((i % 3) == 2){
            printf("..*.");
        }
        else {
            printf("..#.");
        }
    }
    printf(".");
}