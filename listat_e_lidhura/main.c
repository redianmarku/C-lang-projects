#include <stdio.h>
#include <stdlib.h>

struct nyje {
    int vlera;
    struct nyje * pas;
};

void print_data(struct nyje * koka){
    if(koka == NULL){
        printf("Lista eshte boshe");
    }
    struct nyje * ptr = NULL;
    ptr = koka;
    while (ptr != NULL) {
        printf("%d \n", ptr->vlera);
        ptr = ptr->pas;
    }
    
}

int count_nyje(struct nyje * koka){
    int count = 0;
    if(koka == NULL){
        printf("Lista eshte boshe");
    }
    struct nyje * ptr = NULL;
    ptr = koka;
    while (ptr != NULL){
        count++;
        ptr = ptr->pas;
    }
    return count;
}

void add_to_end(struct nyje * koka, int vl){
    struct nyje *ptr, *tmp;
    ptr = koka;
    tmp = (struct nyje*)malloc(sizeof(struct nyje));
    tmp->vlera = vl;
    tmp->pas = NULL;
    
    while(ptr->pas != NULL){
        ptr = ptr->pas;
    }
    ptr->pas = tmp;
}

struct nyje * add_beggining(struct nyje * koka, int vl){
    struct nyje * ptr = NULL;
    ptr = (struct nyje *)malloc(sizeof(struct nyje));
    ptr-> vlera = vl;
    ptr->pas = koka;
    
    koka = ptr;
    return koka;
}


int main(){
    
    struct nyje * koka = NULL;
    koka = (struct nyje *)malloc(sizeof(struct nyje));
    koka->vlera = 12;
    
    struct nyje * eliri = NULL;
    eliri = (struct nyje *)malloc(sizeof(struct nyje));
    eliri->vlera = 24;
    koka->pas = eliri;
    
    struct nyje * eliri1 = NULL;
    eliri1 = (struct nyje *)malloc(sizeof(struct nyje));
    eliri1->vlera = 48;
    eliri1->pas = NULL;
    eliri->pas = eliri1;
    
    koka = add_beggining(koka, 77);
    
//  printf("%d", koka->vlera);
    print_data(koka);
//  printf("Numri i nyjeve eshte %d.", count_nyje(koka));
//  add_to_end(koka,96);
    
    
    printf("\n\n\n");
    
    
    return 0;
}

