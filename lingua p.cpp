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
	int num,i =-1;
	char palavra[40];
	cout << "diz uma palavra e termina com !";

	do {
		i++;
	cin >> palavra[i];

	} while (palavra[i] != '!');
	for (num = 0; num < i; num++)
	{
		cout << palavra[num];
		switch (palavra[num]) {

		case  'a':
			cout << "pa";
				break;
		case  'e':
			cout << "pe";
			break;
		case  'i':
			cout << "pi";
			break;
		case  'o':
			cout << "po";
			break;
		case  'u':
			cout << "pu";
			break;

		}
	}


	return 0;
}