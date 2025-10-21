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
	int num, contador = 0;
	int aleatorio = (rand() % 99)+1;

	aleatorio;
	do {
		cout << "\nescolhe um numero e digo se é oq estou a pensar";
		cin >> num;

		if (num < aleatorio) {
			cout << "\nerrado o numero é acima";
			contador++;
		}
		if (num > aleatorio) {
			cout << "errado o numero é abaixo";
			contador = contador + 1;
		}
	} while (aleatorio != num);
	if (contador < 5)
	{
		cout << "\nacertaste TU ES O REI!";
	} if (contador < 10 && contador > 5)
		 {
		cout << "\n acertaste Es um nobre!";
	}
	if( contador > 10)  { cout<< "acertaste... es um campones"; }




	return 0;
}