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
	double PB = 0.8, PS = 1, PC = 0.6, PR = 1.5, B, S, C, R, Lucro, VB, VS, VC, VR;
	std::cout<< "escreva quantidade de bolos ";
	std::cin>> B;
	std::cout<<"Preço que vendeu os bolos ";
	std::cin>> PB;
	std::cout<< "escreva quantidade de sandes ";
	std::cin>> S;
	std::cout<<"Preço que vendeu os sandes ";
	std::cin>> PS;
    std::cout<< "escreva quantidade de café ";
	std::cin>> C;
	std::cout<<"Preço que vendeu os café ";
	std::cin>> PC;
    std::cout<< "escreva quantidade de Refrigerantes ";
	std::cin>> R;
	std::cout<<"Preço que vendeu os Refrigerantes ";
	std::cin>> PR;
	Lucro = ( ( VB - PB ) * B) + ( ( VS - PS ) * S) + ( ( VC - PC ) * C) + ( (VR - PR ) * R);
	std::cout<< " O Lucro foi " << Lucro << ".";
	
	return 0;
}

