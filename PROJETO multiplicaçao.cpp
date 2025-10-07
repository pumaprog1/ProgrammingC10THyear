#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	do
	{ cout << "digite um numero (NÃO DIGITE ZERO): ";
	cin >> numero;
		
		if (numero % 3 == 0) {
			cout << " o teu numero é multiplo de 3\n";
		}
		if (numero % 5 == 0) {
			cout << " o teu numero é multiplo de 5\n";

		}



	} while (numero != 0);
}
		