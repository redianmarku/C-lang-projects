#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct cilinder {
  int x;
  int y;
  int rreze;
  int lartesia;
};

struct pika{
  int x;
  int y;
};

struct rrethi{
  struct pika qendra;
  int rreze;
};

struct cilinderi{
  struct rrethi baza;
  int lartesia;
};

struct koni{
  struct rrethi baza;
  int lartesia;
};

int main(){
  struct cilinder c[3];

  for(int i = 1; i <= 3; i++){
    printf("----Cilindri %d----\n", i);
    printf("Kordinata X: ");
    scanf("%d", &c[i].x);
    printf("Kordinata y: ");
    scanf("%d", &c[i].y);
    printf("Rrezja: ");
    scanf("%d", &c[i].rreze);
    printf("Lartesia: ");
    scanf("%d", &c[i].lartesia);
  }

  struct cilinderi  cn[3];

  for(int i = 1; i <= 3; i++){
    printf("----Cilindri %d----\n", i);
    printf("Kordinata X: ");
    scanf("%d", &cn[i].baza.qendra.x);
    printf("Kordinata y: ");
    scanf("%d", &cn[i].baza.qendra.y);
    printf("Rrezja: ");
    scanf("%d", &cn[i].baza.rreze);
    printf("Lartesia: ");
    scanf("%d", &cn[i].lartesia);
  }
  

  return 0;
}