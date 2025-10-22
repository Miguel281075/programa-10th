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
	int n1, n2, resultado;
	char C;
	cout << " quer fazer que conta ( +, -, *, /)\n";
	cin >> C;
	cout << "diz aí o primeiro numero\n";
	cin >> n1;
	cout << "diz aí o seguendo numero\n";
	cin >> n2;

	switch (C)
	{
	case'+':
		resultado = n1 + n2;
	
	cout << "resultado da soma é" << resultado << ".";
	break;
	case'-':
	resultado= n1 - n2  ;

	cout << "resultado da subtraçao é" << resultado << ".";
	break;
	case'*':
		resultado = n1 * n2;
	
		cout << "resultado da multiplicaçao é" << resultado << ".";
	break;
	case'/':
		resultado = n1 / n2;

	cout << "resultado da diviçao é" << resultado << ".";
	break;
	
	}
	
	return 0;
}