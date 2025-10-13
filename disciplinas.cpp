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

	std::string disciplina[5] = { "Portugues", "Ingles", "Matematica", "TLP", "ACSO" };
	int N;
	char Sair = 'n';

	do
	{
		std::cout << "Escolhe o número do disciplina: ";
		std::cin >> N;

		if (N > 4 || N < 0)
		{
		std::cout << "\nNão há um materia número "<<N<<"\n";
		}
		else
		{
				std::cout << "\nO disciplina número " << N << " é um " << disciplina[N];
			std::cout << "\n\nDeseija sair (s/n)\n";
			std::cin >> Sair;
		}
		
	}while (Sair != 's');
	
	return 0;
}



