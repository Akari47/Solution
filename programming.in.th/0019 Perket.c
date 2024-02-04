#include <stdio.h>
int n, x = 20000000, S[10], B[10];
int diff(int x, int y) {
    int d;
    if(x - y < 0){
        d = y - x;
    }
    else {
        d = x - y;
    }
    return d;
}

void f(int i, int s_tot, int b_tot) {
    if (i == n) {
        if (b_tot > 0 && diff(s_tot, b_tot) < x)
            x = diff(s_tot, b_tot);
    } else {
        f(i + 1, s_tot, b_tot);
        f(i + 1, s_tot * S[i], b_tot + B[i]);
    }
}

int main(void) {
    scanf("%i", &n);
    for (int i = 0; i < n; i++){
        scanf("%i %i", &S[i], &B[i]);
    }
    f(0, 1, 0);
    printf("%i", x);
}
