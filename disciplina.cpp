#include <iostream>
#include <string>
using namespace std;
int main() {
	string materia[5] = { "fq","pt","mat","bio","hist" };
	int escolha;
	char sair;
	setlocale(LC_ALL, "Portuguese");
	sair = 'n';
	do {
		cout << "Escolha uma materia  entre 0 e 4\n";
		cin >> escolha;

		if (escolha < 0 || escolha > 4)
		{
			cout << "numero invalido tente novamente\n";
		}
		else
		{
			cout << "a materia que escolheste foi, Nº " << escolha << " " << materia[escolha];
		}
		cout << "\ndesejas sair? s/n ";
		cin >> sair;

	} while (sair == 'n');
}

