//Program qe tregon nese 2 matrica jane simetrike.

#include <stdio.h>

int main(){
    int rreshta, kolona;
    int simetrike = 0;
    
    printf("Vendos numrin e rreshtave: ");
    scanf("%d", &rreshta);
    
    printf("Vendos numrin e kolonave: ");
    scanf("%d", &kolona);
    
    int matricaA[rreshta][kolona];
    int matricaB[rreshta][kolona];
    
    printf("==== Matrica A ==== \n");
    for(int i = 0; i < rreshta; i++){
        for(int j = 0; j < kolona; j++){
            printf("Vendos elementin matricaA[%d][%d]: ", i + 1, j +1);
            scanf("%d", &matricaA[i][j]);
        }
    }
    
    printf("==== Matrica B ==== \n");
    for(int i = 0; i < rreshta; i++){
        for(int j = 0; j < kolona; j++){
            printf("Vendos elementin matricaB[%d][%d]: ", i + 1, j +1);
            scanf("%d", &matricaB[i][j]);
        }
    }

    for(int i = 0; i < rreshta; i++){
        for(int j = 0; j < kolona; j++){
            if(matricaA[i][j] == matricaB[i][j]){
                simetrike = 1;
            }
        }

    }
    
    printf("\n\n");
    
    if(simetrike == 1){
        printf("Vekoret jane simetrike.");
    }else{
        printf("Vektoret nuk jane simetrike.");
    }
    
    printf("\n\n\n");
    return 0;
}
