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
	int num, Tentativa;
	num = rand() % 99+1;
	do {
		cout << "Diga um n�mero\n";
		cin >> Tentativa;
		if (Tentativa < num) {
			cout << "O n�mero est� ac\n";
		}
		if (Tentativa > num) {
			cout << "O n�mero est� ba\n";
		}
	} while (Tentativa != num);
	cout << "O n�mero est� Ce \n";

	return 0;
}