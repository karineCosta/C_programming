#include <iostream>
using namespace std;

int main() {
    int n;

    // Loop que permite tentar novamente até que o número seja primo
    while (true) {
        cout << "Digite um numero inteiro: ";
        cin >> n;

        // Verifica se o número é menor que 2, pois números menores que 2 não são primos
        if (n < 2) {
            cout << "Nao primo. Tente novamente.\n";
            continue; // Solicita nova entrada sem sair do loop
        }

        bool isPrime = true;

        // Loop para verificar se o número é divisível por algum valor entre 2 e n-1
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break; // Se encontrar um divisor, sai do loop
            }
        }

        // Resultado
        if (isPrime) {
            cout << "Primo\n";
            break; // Sai do loop quando o número for primo
        } else {
            cout << "Nao primo. Tente novamente.\n";
        }
    }
    // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
