//  main.c
//  shuma_rreshtave_kolonave
//
//  Created by Redian Marku on 25.1.22.
//
//  Program qe llogarit shumen e rreshtave dhe kolonve

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int rreshta, kolona;
    int shuma = 0;
    
    printf("Vendos numrin e rreshtave: ");
    scanf("%d", &rreshta);
    
    printf("Vendos numrin e kolonve: ");
    scanf("%d", &kolona);
    
    int matrica[rreshta][kolona];
    
    for(int i = 0; i < rreshta; i++){
        for(int j = 0; j < kolona; j++){
            printf("Vendose elementin [%d][%d]: ", i + 1, j +1);
            scanf("%d", &matrica[i][j]);
        }
    }
    
    for(int i = 0; i < rreshta; i++){
        for(int j = 0; j < kolona; j++){
            shuma = shuma + matrica[i][j];
        }
    }
    printf("\n\n");
    printf("Shuma e rreshtave dhe shuma e kolonve eshte: %d.", shuma);
    
    printf("\n\n\n");
    return 0;
}
