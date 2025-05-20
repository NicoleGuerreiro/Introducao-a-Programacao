#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string nomes[n];
    double nota1[n], nota2[n];
    for (int i = 0; i < n; i++) {
        cin >> nomes[i] >> nota1[i] >> nota2[i];
    }

    printf("Alunos aprovados: \n");

    for (int i = 0; i < n; i++)
    {
        double media = (nota1[i] + nota2[i]) / 2;
        if (media >= 6)
        {
            printf("%s\n", nomes[i].c_str());
        }
    }
    return 0;
}