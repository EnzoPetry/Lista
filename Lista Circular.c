#include <stdio.h>
#define TAM_MAX 10

int pos = 0;
int ini = 0;

int lista[TAM_MAX];

void listaIn(int i) {
  lista[pos] = i;
  pos = (pos + 1) % TAM_MAX;
}

void listaOut() {
  lista[ini] = 0;
  ini = (ini + 1) % TAM_MAX;
}

int main(void) {
  listaIn(15);
  listaIn(50);
  listaIn(60);
  listaOut();
  listaIn(25);
  listaIn(5);
  listaOut();
  listaIn(30);
  listaIn(45);
  listaOut();
  listaIn(10);
  listaIn(35);
  listaIn(50);
  listaOut();
  listaIn(20);
  listaIn(40);
  listaOut();
  listaOut();

  for (int x = 0; x < TAM_MAX; x++) {
    printf("%d ", lista[x]);
    printf("\n");
  }
  return 0;
}
