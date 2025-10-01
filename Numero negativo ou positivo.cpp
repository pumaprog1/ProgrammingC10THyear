/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
   int numero;
   std::cout<<"escreva o numero";
   std::cin>>numero;
   
   if(numero>0)
   std::cout<<"numero positivo";
   if(numero==0)
   std::cout<<"numero neutro";
   else
   std::cout<<"numero negativo";
}