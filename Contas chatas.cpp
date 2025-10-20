#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int somar = 0, contar = 0, num [10];
	char letra;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "dix ai o" << (i + 1) << "numero :";
		cin >> num[i];
		if (num < 0)
		{
			somar = somar + num[i];
			contar++;
		}
	}
	cout << "quer somar(s) ou  contar(c)?";
	cin >> letra;
	if (letra == 's')
	{
		cout << somar << endl;
	}
	return 0;
}