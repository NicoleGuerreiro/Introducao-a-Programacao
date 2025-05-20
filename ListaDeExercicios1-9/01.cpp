#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int n, posicao = 0;
  cin >> n;

  int v[n];
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int maior = v[0];
  for (int i = 1; i < n; i++)
  {
    if (v[i] > maior) {
      maior = v[i];
      posicao = i;
    }
  }
  printf("%.1f\n", maior);
  printf("%.d", posicao);
  return 0;
}