#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;

  int v[n];
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    if (v[i] % 2 == 0) {
      printf("%d\n", v[i]);
      count++;
     }
  }
  printf("\n%d\n", count);
  return 0;

}