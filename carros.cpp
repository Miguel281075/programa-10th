/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string carros[3] = { "Hunda", "BMW", "Supra" };
	int N;
	char Sair = 'n';

	do
	{
		std::cout << "Escolhe o número do carro: ";
		std::cin >> N;

		if (N < 3 && N > 0)
		{
			std::cout << "\nO carro número " << N << " é um " << carros[N];
			std::cout << "\n\nDeseija sair (s/n)\n";
			std::cin >> Sair;
		}
		else
		{
			std::cout << "\nNão há um carro número "<<N<<"\n";
		}
		
	}while (Sair != 's');
	
	return 0;
}



