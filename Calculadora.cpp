#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num1,num2, soma;
	char resposta = 'void';
	cout << "queres somar(+) subtrair(-) dividir(/) ou multiplicar (x)";
	cin >> resposta;
	
	switch (resposta)
	{
	case '+':
	cout << "ok diz o numero 1 ";
			cin >> num1;
			cout << " fixe agora o numero2 ";
				cin >> num2;
				soma = num1 + num2;
				cout << " o resultado foi " << soma;
				break;
	case '-':
		cout << "\nok diz o numero 1 ";
		cin >> num1;
		cout << "\n fixe agora o numero2 ";
		cin >> num2;
		soma = num1 - num2;
		cout << "\n o resultado foi " << soma;
		break;
	case '/':
		cout << "\nok diz o numero 1 ";
		cin >> num1;
		cout << "\n fixe agora o numero2 ";
		cin >> num2;
		soma = num1 / num2;
		cout << " \no resultado foi " << soma;
		break;
	case 'x':
		cout << "\nok diz o numero 1 ";
		cin >> num1;
		cout << " \nfixe agora o numero2 ";
		cin >> num2;
		soma = num1 * num2;
		cout << "\n o resultado foi " << soma;
		break;
	

	}

	return 0;
}