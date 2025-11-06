#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int n;
		char sai = 'n';
	string Namoradas[5] = {};
	string Apelidos[5] = {};
	
	for (int i = 0; i <5; ++i) {
		cout << "escolhe uma namorada # " << i;
		cin >> Namoradas[i];
		cout << "escolhe um apelido #"<< i;
		cin >> Apelidos[i];
		
	}
	while (sai == 'n')
	{
		cout << "\n\nEscolhe o numero para saber o nome e o apelido da tua namorada: ";
		cin >> n;
		n = n - 1;
		if (n >= 0 && n < 5)
		{
			cout << "\nA tua/teu namorada/o " << Namoradas[n] << " tem a alcunha " << Apelidos[n];
		}
		else if (n > 4)
		{
			cout << "\nNO :/";

		}
		else
		{
			cout << "\nNO";
		}
		cout << "\nquers sair (s/n)";
		cin >> sai;

	}
}

	





