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
	float altura[30],media = 0;
	int idade[30],i,contador = 0;
	for (i = 0; i < 30; i++)
	{
		cout << "diz me a idade do " << i + 1 << " aluno\n";
		cin >> idade[i];
		
		cout << "diz me a altura do " << i + 1 << " aluno\n";
		cin >> altura[i];
		media = media + altura[i];
	}media = media / 30;
	cout<< media<<"\n";
	
	for (int i = 0; i < 30; i++)
	{
		if (idade[i] >= 13)
		{
			if (altura[i] < media)
			{
				contador++;
		
			}
		}
	}

	cout<<"existem" << contador << "\n" " alunos com 13 anos abaixo da media de altura\n";
}
	


