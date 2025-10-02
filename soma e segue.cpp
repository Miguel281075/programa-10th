/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, numero, soma, B; 
	soma=0;
	std::cout<<"quantos numeros uma pessoa quer somar";
	std::cin>> B;
	 for (i=1; i<=B; i++) {
	     std::cout<<"qual numero quer somar";
	     std::cin>> numero;
	     soma = soma + numero;
	 }
	     std::cout<<"O resultado final e" << soma << ".";
return 0;	 
	     
	 
    
}
	 