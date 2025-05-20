#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n;
  cin >> n;
  int v[n];

  int soma = 0;
  int qtd = 0;

  for (int i = 0; i < n; i++) {
    cin >> v[n];
    if (v[n] % 2 == 0) {
      soma += v[n];
      qtd++;
    }
  }
  printf("%.1d\n", qtd ? soma / qtd : 0.0);
  return 0;

}