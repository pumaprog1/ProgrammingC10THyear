
#include <iostream>
#include <string>
using namespace std;
int main() {
	string carro[3] = { "bmw","mercedes","audi" };
	int escolha;
	char sair;
	setlocale(LC_ALL, "Portuguese");
	sair = 'n';
	do {
		cout << "Escolha um carro entre 0 e 2\n";
		cin >> escolha;
		
		if (escolha < 0 || escolha > 2) 
		{
			cout << "numero invalido tente novamente\n";
		}
		else
		{
			cout << "o carro que escolheste foi, Nº " << escolha << " " << carro[escolha];
		}
			cout << "\ndesejas sair? s/n ";
			cin >> sair;
	
	} while (sair == 'n');
}
	
		
	


