#include <stdio.h>
#include <stdlib.h>

struct person{
    char * emri;
    char mbiemri[20];
    char gjinia;
    int mosha;
};

struct nxenes{
    struct person p;
    int notat[2];
};

struct lenda{
    char *emri;
    int kredite;
};

int main(){
    int n;
    printf("Vendosni numrin e studentave: ");
    scanf("%d", &n);
    
    struct nxenes nx[n];
    struct lenda lendet[2];
    
//    Marim te dhenat e lendeve
    printf("Vendosni lendet dhe kreditet e tyre: \n");
    for(int i = 1; i<=2; i++){
        lendet[i].emri = (char *)malloc(sizeof(char *));
        printf("Lenda %d: \n", i);
        printf("Emri: ");
        scanf("%s", lendet[i].emri);
        printf("Kreditet: ");
        scanf("%d", &lendet[i].kredite);

    }
    
//    Marim te dhenat e studentetve
    printf("Vendosni te dhenat e studentetve: \n");
    for(int i = 1; i<=n; i++){
        printf("Studenti %d: \n", i);
        nx[i].p.emri = (char *)malloc(sizeof(char *));
        printf("Emri: ");
        scanf("%s", nx[i].p.emri);
        printf("Mbiemri: ");
        scanf("%s", nx[i].p.mbiemri);
        printf("Gjinia: ");
        scanf("%c", &nx[i].p.gjinia);
        scanf("%c", &nx[i].p.gjinia);
        printf("Mosha: ");
        scanf("%d", &nx[i].p.mosha);
        printf("Notat: ");
        for(int j = 1; j<=2; j++){
            printf("%s: ", lendet[j].emri);
            scanf("%d", &nx[i].notat[j]);
        }
    }
    
    float max = 0;
    int poz = -1;
  
    
//    Gjejme shumen dhe mesataren
    
    int sh_krediteve = 0;
    for(int i = 1; i<=2; i++){
        sh_krediteve = sh_krediteve + lendet[i].kredite;
    }
    float mesataret[n];
    for(int i = 1; i<=n; i++){
        int s = 0;
        for(int j = 1; j<=2; j++){
            s = s + nx[i].notat[j] * lendet[j].kredite;
        }
        float mes = s / sh_krediteve;
        mesataret[i] = mes;
        if(mes > max){
            max = mes;
            poz = i;
        }
    }
    
    
//    Renditja e studenteve sipas mesatares
    int temp;
    for(int i = 1; i<=n; i++ ){
        if(mesataret[i + 1] > mesataret[i]){
            temp = mesataret[i + 1];
            mesataret[i + 1] = mesataret[i];
            mesataret[i] = temp;
            
            struct nxenes temp_nx;
            temp_nx = nx[i +1];
            nx[i + 1] = nx[i];
            nx[i] = temp_nx;
        }
    }
    
//    Printojme studentet e renditur sipas mesatares
    printf("Studentet e renditur sipas mesatares jane: \n");
    for(int i = 1; i <= n; i++){
        printf("%s \n", nx[i].p.emri);
    }
    
    
    return 0;

}
