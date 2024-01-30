#include <stdio.h>
int main(){
    char x[10000];
    int i = 0, s = 0, c = 0;
    x[0] = getchar();
    while (('a' <= x[i] && x[i] <= 'z') || ('A' <= x[i] && x[i] <= 'Z')){
        if('a' <= x[i] && x[i] <= 'z'){
            s++;
        }
        else{
            c++;
        }
        i++;
        x[i] = getchar();
    }
    if(s != 0 && c == 0){
        printf("All Small Letter");
    }
    if(c != 0 && s == 0){
        printf("All Capital Letter");
    }
    if(c != 0 && s != 0){
        printf("Mix");
    }
}