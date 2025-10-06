#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numeros, i, soma, numeroquesoma;
	std::cout << "Perguntar quantos números quer somar";
	std::cin >> numeros;
	soma = 0;
	for (i = 1; i <= numeros; i++) {
		std::cout << "Digite os números que quer somar";
		std::cin >> numeroquesoma;
		soma = soma + numeroquesoma;
	}
	std::cout << "A soma dos números é: " << soma;
}