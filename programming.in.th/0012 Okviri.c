#include <stdio.h>

int main(){
    char a[15];
    int n = 0;
    while (getchar() >= 'A' && getchar() <= 'Z'){
        scanf("%c", &a[n]);
        n++;
    }
    int m = 4*n+1;
    char l1[m], l2[m], l3[m], l4[m], l5[m];
    for (int i = 0; i < m+1; i++){
        if ((i-2) % 12 == 9){
            l1[i] = '*';
        }
        if ((i-2) % 12 == 1 || (i-2) % 12 == 5){
            l1[i] = '#';
        }
        else {
            l1[i] = '.';
        }
        l5[i] = l1[i];
    }
    
}