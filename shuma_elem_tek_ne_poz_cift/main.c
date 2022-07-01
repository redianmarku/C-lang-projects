#include <stdio.h>
#include <stdlib.h>

void shuma_koltek_rreshtcift(int **, int );

int main(){
  int N;
  printf("Vendosni madhesine e matrices katrore: ");
  scanf("%d", &N);

  int ** T;
  T = malloc(N * sizeof(T));
  for(int i = 0; i < N; i++){
    T[i] = malloc(N * sizeof(T[i]));
  }

  printf("Vendosni elementet e matrices: ");
  for(int i = 0; i< N; i++){
    for(int j = 0; j < N; j++){
      scanf("%d", &T[i][j]);
    }
  }

   printf("Kjo eshte matrica qe vendoset: \n");
  for(int i = 0; i< N; i++){
    for(int j = 0; j < N; j++){
      printf("%d ", T[i][j]);
    }
    printf("\n");
  }

  shuma_koltek_rreshtcift(T, N);

  
  return 0;
}

void shuma_koltek_rreshtcift(int ** T, int N){
  
  for(int i = 0; i< N; i++){
    int shuma = 0;
    for(int j = 0; j < N; j++){
      if(i%2 == 0){
        if(j%2 == 1){
          shuma = shuma + T[i][j];
        }
      }
    }
    printf("Shuma e elem tek ne poz cift te rresh %d eshte: %d \n",i + 1, shuma);
  }
  
}
