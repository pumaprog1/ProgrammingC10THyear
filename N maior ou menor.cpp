#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n,maior = -2147483648, menor =2147483647;
	do {
		cout << "diz um numero";
			cin >> n;
			if ( maior<n)
			{
				
				maior=n;
			}
			if ( n<menor)
			{
				menor = n;
			}
	} while (n != 0);

	cout << "o teu numero maior é" << maior << " e o menor é "<<menor<< ".";
	return 0;

}