#include <iostream>
using namespace std;

int main() {
    int n, soma = 0, contador = 1;

    // Pede ao usuário um número inteiro positivo
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    // Repetir enquanto o número for inválido
    while (n <= 0) {
        cout << "Numero invalido. Insira um numero inteiro POSITIVO: ";
        cin >> n;
    }

    // Calculo
    while (contador <= n) {
        soma += contador;
        contador++;
    }

    // resultado
    cout << "A soma dos primeiros " << n << " numeros inteiros e: " << soma << endl;

    // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
