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
	int num = 0, base, expoente, resultado = 1, i;
	cout << "qual base quer";
	cin >> base;
	cout << "qual expoente quer";
	cin >> expoente;
	for (i = 0; i < expoente; i++) {
		resultado = base * resultado;
		
	}
	cout << resultado;
	


	return 0;
}


