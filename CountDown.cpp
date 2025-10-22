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
	int num;
	cout << "diz ai um numero porra ";
	cin >> num;
	if (num < 0) {
		cout << "escreveste um numero invalido colega\n";
	}
	else {
		for (int i = 0; i <= num; i++) {
			cout << "a contagem esta em" << num - i << "\n";
		}
		cout << "Chegaste ao fim de numeros colega";
	}

	return 0;
}