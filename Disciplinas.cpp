#include <string>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int S;
	setlocale(LC_ALL, "Portuguese");
	string disc[9] = { "mat", "Por", "TLP", "Ing", "Tic", "Edf", "Ai", "ACSO", "FQ", };
	string prof[9] = { "Joana", "Felipa","Clara","Miquelina","Georgina","Batatinha","AndreVentralha","Ronaldo" };
	do {
		cout << " \n Qual é o número da matéria queres saber? \n";
		cin >> S;
		cout << "\n A matéria é " << disc[S] << " e o professor é " << prof[S] << " .\n";

	} while (S != 0);
	return 0;
}