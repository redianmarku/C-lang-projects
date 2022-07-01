#include <stdio.h>
#include <stdlib.h>

void mes_diagonales(int ** mat, int m){
  int shuma = 0;
  int count = 0;
  for(int i = 0; i<m; i++){
    for(int j = 0; j<m; j++){
      if(i == j){
        count++;
        shuma = shuma + mat[i][j];
      }
    }
  }
  int mes = shuma / count;
  printf("Mesatarja e diagonales kryesore eshte %d", mes);
}

int main(){
  int m;
  printf("Vendosni madhesine e matrices katorer: ");
  scanf("%d", &m);
  int ** mat;
  mat = malloc(m * sizeof(mat));
  for(int i = 0; i < m; i++){
    mat[i] = malloc(m * sizeof(mat[i]));
  }

  printf("Vendosni vlerat e matrices: ");
  for(int i = 0; i<m; i++){
    for(int j = 0; j<m; j++){
      scanf("%d", &mat[i][j]);
    }
  }

  for(int i = 0; i<m; i++){
    for(int j = 0; j<m; j++){
      printf("%d   ", mat[i][j]);
    }
    printf("\n");
  }

  mes_diagonales(mat, m);
  
  return 0;
}

