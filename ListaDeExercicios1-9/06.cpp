#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n;
  cin >> n;

  string nome[n];
  int idade[n];
  int mais_velho =-1;
  int maior_idade = 0;

  for (int i = 0; i < n; i++) {
    cin >> nome[i] >> idade[i];
    if (idade[i] > maior_idade) {
      maior_idade = idade[i];
      mais_velho = i;

    }
  }
  printf("Pessoa mais velha: %s\n", nome[mais_velho].c_str());
  return 0;

}