#include <iostream>
#include <limits> // Necessário para std::numeric_limits
using namespace std;

int main() {
    int x;

    // Validando a entrada do usuário
    while (true) {
        cout << "Digite um numero inteiro: ";
        cin >> x;

        // Verifica se a entrada é válida
        if (cin.fail()) {
            cin.clear(); // Limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora o restante da entrada
            cout << "Entrada invalida! Por favor, insira um numero inteiro.\n";
        } else {
            break; // Sai do loop se a entrada for válida
        }
    }

    cout << "\nTabuada do " << x << ":\n";

    // Utilizando um loop for para calcular e imprimir a tabuada
    for (int i = 1; i <= 10; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }

    // Pausa manual para o usuário ver a saída
    cout << "\nPressione Enter para finalizar o programa...";
    cin.ignore(); // Limpa o buffer de entrada
    cin.get();    // Aguarda o usuário pressionar Enter

    return 0;
}
