//
//  main.c
//  numri-thjesht
//
//  Created by Redian Marku on 30.1.22.
//

#include <stdio.h>

int main(){
    int numri, i, eshte = 1;
    
    printf("Vendos nje numer: ");
    scanf("%d", &numri);
    
    for(i = 2; i < numri / 2; i++){
        if(numri % i == 0){
            eshte = 0;
            break;
        }
    }
    
    if(eshte == 1){
        printf("Numri eshte i thjeshte.");
    }else{
        printf("Numri nuk eshte i thjeshte.");
    }
    
    printf("\n\n");
    return 0;
}
