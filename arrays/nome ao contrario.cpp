
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main() {
  string nome[5] = {};
  char saida = 's';
    setlocale(LC_ALL, "Portuguese");
    cout<< "queres q eu escreva nomes ao contrario? s/n";
    cin >> saida;
    
    while (saida == 's')
    { 
    for (int i =0; i<5; i++)
    {
        cout<< " escolhe um nome";
        cin>> nome[i];
    }
      for (int i =4; i>=0; i--)
    {
       cout << nome[i]<<"\n";
       
    }
    cout<< "queres fazer outra vez? s/n";
    cin >> saida;
    
}
    return 0;
}