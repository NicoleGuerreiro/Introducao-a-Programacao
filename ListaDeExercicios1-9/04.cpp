#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n;
  cin >> n;

  double v[n];
  double soma = 0;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    soma += v[i];
  }
  double media = soma / n;
  printf("%.2f\n", media);

  for (int i = 0; i < n; i++) {
    if (v[i] < media) {
      printf("%.1f\n", v[i]);

    }
  }

  return 0;

}