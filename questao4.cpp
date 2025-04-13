#include <iostream>
#include <limits> // Para usar numeric_limits
using namespace std;

int main() {
    int n;

    // Loop para garantir que o usuário digite um número inteiro positivo
    while (true) {
        cout << "Digite um numero inteiro positivo: ";
        cin >> n;

        // Verifica se a entrada não é um número inteiro ou se o número é negativo
        if (cin.fail() || n <= 0) {
            cin.clear(); // Limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora o restante da entrada
            cout << "Entrada invalida! Por favor, insira um numero inteiro positivo.\n";
        } else {
            break; // Sai do loop se a entrada for válida
        }
    }

    // Variáveis para os dois primeiros números da sequência de Fibonacci
    long long int a = 0, b = 1;

    // Laço for para imprimir os n primeiros números de Fibonacci
    cout << "Os " << n << " primeiros numeros da sequencia de Fibonacci sao: \n";
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << a << " ";
        } else if (i == 1) {
            cout << b << " ";
        } else {
            long long int next = a + b;  // Calcula o próximo número da sequência
            cout << next << " ";
            a = b;  // Atualiza a para o próximo número
            b = next;  // Atualiza b para o próximo número
        }
    }

    cout << endl;
    // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
