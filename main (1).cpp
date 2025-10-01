/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int kmI,kmF,GasolinaGasta,resultado;
    std::cout<<"Quantos litros?";
    std::cin>>GasolinaGasta;
    
    std::cout<< "Kilometros iniciais";
    std::cin>>kmI;
    
    std::cout<< "kilometros finais";
    std::cin>> kmF;
    
    resultado =(GasolinaGasta* 100 ) / (kmF-kmI);
    
    std::cout<<"o veiculo gasta"<<resultado<<"litros ";
    
    
    
}
