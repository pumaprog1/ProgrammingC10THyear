#include <iostream>
using namespace std;

int main() {
   
    int vetor1[10], vetor2[10], vetor3[20];

    cout << "Digite 10 numeros para o primeiro vetor:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    cout << "\nDigite 10 numeros para o segundo vetor:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor2[i];
    }

    int j = 0;
    for (int i = 0; i < 10; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];
    }

    cout << "\nVetor intercalado (20 elementos):\n";
    for (int i = 0; i < 20; i++) {
        cout << vetor3[i] << " ";
    }
    cout << endl;

    return 0;
}
