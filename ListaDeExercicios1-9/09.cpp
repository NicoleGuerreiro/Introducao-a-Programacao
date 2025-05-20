#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;

    string nome[n];
    double preco_compra[n], preco_venda[n];
    double lucro[n];

    for (int i = 0; i < n; i++) {
        cin >> nome[i] >> preco_compra[i] >> preco_venda[i];
        lucro[i] = (preco_venda[i] - preco_compra[i]) / preco_compra[i] * 100.0;
    }

    int abaixo10 = 0, entre10e20 = 0, acima20 = 0;
    double total_compra = 0.0, total_venda = 0.0;

    for (int i = 0; i < n; i++) {
        if (lucro[i] < 10.0) {
            abaixo10++;
        }
        if (lucro[i] >= 10.0 && lucro[i] <= 20.0) {
            entre10e20++;
        }
        if (lucro[i] > 20.0) {
            acima20++;
        }

        total_compra += preco_compra[i];
        total_venda += preco_venda[i];
    }

    printf("Lucro abaixo de 10%%: %d\n", abaixo10);
    printf("Lucro entre 10%% e 20%%: %d\n", entre10e20);
    printf("Lucro acima de 20%%: %d\n", acima20);
    printf("Valor total de compra: %.2lf\n", total_compra);
    printf("Valor total de venda: %.2lf\n", total_venda);
    printf("Lucro total: %.2lf\n", total_venda - total_compra);

    return 0;
}
