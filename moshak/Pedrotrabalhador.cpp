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
	int Altura,Largura,Comprimento,Volume;

	cin >> Altura >> Comprimento >> Largura;

	Volume = Altura * Comprimento * Largura;

	if (Volume >= 50 && Altura >= 3) {
		cout << 1 <<endl;


	}
	else
	{
		cout << 0<<endl;
	}
	return 0;
}