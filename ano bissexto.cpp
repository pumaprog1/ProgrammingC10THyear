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
	int ano, inicio = 0;
	cout << "qual ano queres ver se é bissexto";
	cin >> ano;
	if (ano % 100 !=0 || ano % 400 == 0  && ano % 4 == 0) {
		cout << "o teu ano é bissexto";

	}
	else { cout << "não é bissexto"; }	
		
}
	//else if (ano % 4 == 0) {
		//cout << "o teu ano é bissexto";
	//}
	//else {
		//cout << "o teu ano não é bissexto";\\
	}//