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
	cout << "diz a� o primeiro numero\n";
	cin >> n1;
	cout << "diz a� o seguendo numero\n";
	cin >> n2;

	switch (C)
	{
	case'+':
		resultado = n1 + n2;
	
	cout << "resultado da soma �" << resultado << ".";
	break;
	case'-':
	resultado= n1 - n2  ;

	cout << "resultado da subtra�ao �" << resultado << ".";
	break;
	case'*':
		resultado = n1 * n2;
	
		cout << "resultado da multiplica�ao �" << resultado << ".";
	break;
	case'/':
		resultado = n1 / n2;

	cout << "resultado da divi�ao �" << resultado << ".";
	break;
	
	}
	
	return 0;
}