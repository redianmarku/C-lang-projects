#include <stdio.h>
#include <stdlib.h>

// Struktura e nyjes
struct nyje{
  int vl;
  struct nyje *pas;
};


// Funksioni qe krijon nyje
struct nyje *krijoNyje(int vlera){
  struct nyje *eliri = malloc(sizeof(struct nyje));
  eliri->vl = vlera;
  eliri->pas = NULL;
  return eliri;
}


// Funksioni qe fut vlere ne fund te listes
struct nyje *futFund(struct nyje *koka, int vlera){
  if(koka == NULL){
    printf("Lista eshte boshe.");
  }
  struct nyje *eliri = krijoNyje(vlera);
  struct nyje *tmp = koka;
  while(tmp->pas != NULL){
    tmp = tmp->pas;
  }
  tmp->pas = eliri;
  return koka;
}

// Funksioni per te krijuar liste
struct nyje *krijoListe(struct nyje *koka, int sasiVl){
  for(int i = 0; i<sasiVl; i++){
    int tmp_vl;
    printf("Vendos elementin %d te listes: ", i + 1);
    scanf("%d", &tmp_vl);
    futFund(koka, tmp_vl);
  }
  return koka;
}


// Funksioni per te printuar vlerat e listes
struct nyje *printoListen(struct nyje *koka){
  if(koka == NULL){
    printf("Lista eshte bosh");
  }
  struct nyje *tmp = krijoNyje(0);
  tmp = koka;
  while(tmp != NULL){
    printf("%d \n", tmp->vl);
    tmp = tmp->pas;
  }
  return koka;
}

// Funksion qe shton pas cdo elementi negativ dyfishin
struct nyje *shtoDyfishin(struct nyje *koka){
  if(koka == NULL){
    printf("Lista eshte bosh");
  }
  struct nyje *tmp = krijoNyje(0);
  struct nyje *eliri = malloc(sizeof(struct nyje));
  tmp = koka;
  while(tmp != NULL){
    if(tmp->vl < 0){
      eliri->vl = tmp->vl * 2;
      eliri->pas = tmp;
    }
    eliri->pas = tmp;
    
  }
  return koka;
}

// Shuma e serise me rekursion --> S=-3+5-7+9-11..
int seria_rekursiv(int n){
  if(n == 1){
    return -3;
  }
  int a = seria_rekursiv(n - 1);
  return (a * -1) + n+2;
}


int main(){
  struct nyje * koka = krijoNyje(1);

  krijoListe(koka, 3);

  shtoDyfishin(koka);

  printoListen(koka);

  printf("%d", seria_rekursiv(3));

  return 0;
}