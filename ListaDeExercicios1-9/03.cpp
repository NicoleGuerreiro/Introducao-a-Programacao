#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    printf("%d", a[i] + b[i]);
  }

  printf("\n");
  return 0;
  }
