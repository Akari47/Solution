#include <stdio.h>

int main(){
    int a[3] = {1,0,0} ;
    char command;
    scanf("%c", &command);
    while (command >= 'A' && command <= 'Z'){
        if (command == 'A'){
            int temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }
        if (command == 'B'){
            int temp = a[1];
            a[1] = a[2];
            a[2] = temp;
        }
        if (command == 'C'){
            int temp = a[0];
            a[0] = a[2];
            a[2] = temp;
        }
    scanf("%c", &command);                
    }
    for (int i = 0; i < 3; i++){
        if (a[i] == 1){
            printf("%i", i+1);
        }
    }
}