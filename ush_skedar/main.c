#include <stdio.h>
#include <stdlib.h>

void shuma_rreshtave_neskedar(FILE *);
void shto_fund_skedarit(FILE *);
void vlerat_numerike_neskedar(FILE *);

int main(){
  FILE *file;
  shuma_rreshtave_neskedar(file);
  shto_fund_skedarit(file);
  vlerat_numerike_neskedar(file);
  
  return 0;
}

void shuma_rreshtave_neskedar(FILE * file){
  file = fopen("file.txt", "r");
  if(file == NULL){
    printf("File is not found.");
  }

  int n;
  char *c = malloc(sizeof(char));
  int shuma = 0;

  while(fscanf(file, "%d", &n) != EOF){
    printf("%d ", n);
    shuma = shuma + n;
    fscanf(file, "%c", c);
    if(*c == '\n'){
      printf("Shuma e rreshtit eshte %d.", shuma);
      printf("\n");
      shuma = 0;
    }
  }
  fclose(file);
}

void shto_fund_skedarit(FILE * file){
  file = fopen("file.txt", "a");
  if(file == NULL){
    printf("File is not found");
  }
  char * text;
  printf("Vendosni textin qe doni te shtoni ne fund te skedarit: ");
  text = malloc(sizeof(char));
  scanf("%s", text);

  fprintf(file, "\n%s", text);

  fclose(file);;
}

void vlerat_numerike_neskedar(FILE * file){
  file = fopen("file.txt", "r");
  if(file == NULL){
    printf("File is not found.");
  }

  int count;
  int n;

  while(fscanf(file, "%d", &n) != EOF){
    count ++;
  }
  printf("Ne skedar ndodhen %d vlera numerike.", count);
  fclose(file);
}

