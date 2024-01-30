#include <stdio.h>

int main(){
    int n, a = 0, b = 0, c = 0;
    scanf("%i", &n);
    char d[n];
    for (int i = 0; i < n; i++){
        scanf(" %c", &d[i]);
    }
    for (int i = 0; i < n; i++){
        if (i % 3 == 0 && d[i] == 'A'){
            a++;
        }
        else if (i % 3 == 1 && d[i] == 'B'){
            a++;
        }
        else if (i % 3 == 2 && d[i] == 'C'){
            a++;
        }
        if (i % 2 == 0 && d[i] == 'B'){
            b++;
        }
        else if (i % 4 == 1 && d[i] == 'A'){
            b++;
        }
        else if (i % 4 == 3 && d[i] == 'C'){
            b++;
        }        
        if ((i/2) % 3 == 0 && d[i] == 'C'){
            c++;
        }
        else if ((i/2) % 3 == 1 && d[i] == 'A'){
            c++;
        }
        else if ((i/2) % 3 == 2 && d[i] == 'B'){
            c++;
        }
    }
    int max = a;
    if (max < b){
        max = b;
    }
    if (max < c){
        max = c;
    }
    printf("%i", max);
    if (max == a){
        printf("\nAdrian");
    }
    if (max == b){
        printf("\nBruno");
    }
    if (max == c){
        printf("\nGoran");
    }
}