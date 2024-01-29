#include <stdio.h>
int main(){
  int n, m, M;
  scanf("%d", &n);
  int a[n];
  scanf("%d", &a[0]);
  m = a[0];
  M = a[0];
  for (int i = 1; i < n; i++){
      scanf("%d", &a[i]);
      if (a[i] < m){
          m = a[i];
      }
      if (a[i] > M){
          M = a[i];
      }
  }
    printf("%d\n", m);
    printf("%d", M);
}