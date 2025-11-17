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
	int random[4], i, resposta, erradas = 0, j, acerto = 0,saida = 0,tentativas = 0;
	for (i = 0; i < 4; i++) {
		random[i] = rand() % (2);
		cout << random[i];
	}
		do {
		for (i = 0; i < 4; i++) {
			cout << "\ndiz o " << i + 1 << " numero" << endl;
			cin >> resposta;
			if (resposta == random[i]) {
				acerto++;
			}
		
			
		}cout << "\n acertaste " << acerto << endl;
		if (acerto == 4) {
			saida = 1;
		}
		else {
			erradas = erradas + 1;
		}
		acerto = 0;
		tentativas = tentativas + 1;
		cout << "\nestas na " << tentativas << " tentativa";
	} while (saida != 1 );
		cout << "\nparabens lil bro ganhaste";
	return 0;
}