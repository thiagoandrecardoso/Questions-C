#include <stdio.h>

void mover_discos(int d, char origem, char destino, char auxiliar);

int main(int argc, char const *argv[]) {
  int quantidade_disco = 5;
  // O origem, D destino, A auxiliar
  mover_discos(quantidade_disco, 'O', 'D', 'A');
  return 0;
}

void mover_discos(int quantidade_disco, char origem, char destino, char auxiliar){
  if (quantidade_disco == 1) {
    printf("Mover disco da %d da %c para %c\n", quantidade_disco, origem, destino);
  }else{
    // Leva o disco para a aste auxiliar, (trocando aux pelo destino)
    mover_discos(quantidade_disco - 1, origem, auxiliar, destino);
    printf("Mover disco da %d da %c para %c\n", quantidade_disco, origem, destino);

    // leva o que estava no auxiliar para o destino
    mover_discos(quantidade_disco - 1, auxiliar, destino, origem);
  }
}
