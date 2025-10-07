/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N;
	do { 
	    cout<< " Escreva numero/n ";
	    cin>> N;
	    if ( N == 0 ) 
	{ 
	    break;
	    
	}
	if (N % 3 == 0)
	{ cout<< "É multiplo de 3/n";
	    
	}
	if (N % 5 == 0)
	{ cout<< "É multiplo de 5/n";
	    
	}
}    while(N !=0);
	      

    return 0;
}