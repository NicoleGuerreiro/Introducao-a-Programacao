#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n;
  cin >> n;
  double altura[n];
  char sexo[n];

  for (int i = 0; i < n; i++) {
    cin >> altura[i] >> sexo[i];
  }

  double menor = altura[0], maior = altura[0];
  double soma_mulheres = 0;
  int qtd_mulheres = 0, qtd_homens = 0;

  for (int i = 0; i < n; i++) {
    if (altura[i] < menor) {
      menor = altura[i];
    }
    if (altura[i] > maior) {
      maior = altura[i];
    }
    if (sexo[i] == 'F' || sexo[i] == 'f') {
      soma_mulheres += altura[i];
      qtd_mulheres++;
    }
    if (sexo[i] == 'M' || sexo[i] == 'm') {
      qtd_homens++;
    }
  }
  printf("Menor altura = %.2f\n", menor);
  printf("Maior altura = %.2f\n", maior);
  printf("Media das alturas das mulheres = %.2f\n", soma_mulheres / qtd_mulheres);
  printf("Numero de homens = %d\n", qtd_homens);
}