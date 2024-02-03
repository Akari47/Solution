#include <stdio.h>
int main(){
  int m, n;
  scanf("%i %i", &m, &n);
  int a[m][n], b[m][n], c[m][n];
  for (int i =0; i < m; i++){
      for (int j =0; j < n; j++){
          scanf("%i", &a[i][j]);
      }
  }
  for (int i =0; i < m; i++){
      for (int j =0; j < n; j++){
          scanf("%i", &b[i][j]);
      }
  }
  for (int i =0; i < m; i++){
      for (int j =0; j < n; j++){
          c[i][j] = a[i][j] + b[i][j];
      }
  }
  for (int i =0; i < m; i++){
      for (int j =0; j < n; j++){
          printf("%i ", c[i][j]);
      }
      printf("\n");
    }
}