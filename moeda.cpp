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
    string nomes[5] = {};
    for (int i = 0; i < 5; i++)
	{
	cout << "Escreve o nome da "<< i +1 << "ª pessoa";
	cin >> nomes[i];
	}
        	for (int i = 4; i >= 0; i--)
	{
		cout << nomes[i] << "\n";
	}

	return 0;
}