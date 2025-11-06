#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int array[10] = { 15,2,53,4,1,17,5,23,45,19 };
	int aux1, aux2;
	do {

		aux1 = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux1++;
				aux2 = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux2;

			}


		}



    } while (aux1 != 0);


	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << "\n";
	}
}