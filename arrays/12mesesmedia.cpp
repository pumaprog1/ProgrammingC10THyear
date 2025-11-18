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
	int total = 0,temperatura[12],media;
	string meses[12] = {"janeiro", "fevereiro", "março","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
	
	for (int i = 0; i < 12; i++) {
		cout << "diz a temperatura de " << meses[i] << "\n";
		cin >> temperatura[i];
		total = total + temperatura[i];
	} media = total / 12;
	cout <<"a media da temperatura foi"<< media<<" graus";
	
	for (int i = 0; i < 12; i++) {
		if (media < temperatura[i]) {
			cout <<"\n"<< meses[i] << " teve uma temperatura mais alta q a media total ";
		}

	}

	return 0;
}