#include <iostream>
#include <limits> // Para utilizar numeric_limits
using namespace std;

int main() {
    int maior, numero;

    // Lê o primeiro número com validação
    cout << "Digite o 1o numero: ";
    while (!(cin >> maior)) {
        cin.clear(); // Limpa o erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida
        cout << "Entrada invalida! Por favor, insira um numero inteiro: ";
    }

    // Lê os outros 9 números com validação
    for (int i = 2; i <= 10; i++) {
        cout << "Digite o " << i << "o numero: ";
        
        while (!(cin >> numero)) {
            cin.clear(); // Limpa o erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida
            cout << "Entrada invalida! Por favor, insira um numero inteiro: ";
        }

        // Verifica se o número atual é maior que o maior encontrado até agora
        if (numero > maior) {
            maior = numero;
        }
    }

    // Exibe o maior número
    cout << "O maior numero e: " << maior << endl;
    // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
