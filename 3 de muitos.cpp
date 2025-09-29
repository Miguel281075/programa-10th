/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()    
{
    int kmi,kmf,lg,kmh;
    std::cout << "Escreva os kilometros iniciais ";
    std::cin >> kmi;
    std::cout << "Escreva os kilosmetros finais ";
    std::cin >>  kmf;
    std::cout << "Escreva os litros de gasolina gastos ";
    std::cin >> lg;
    kmh = (100*lg)/(kmf-kmi);
    std::cout << "O seu automovel gasta " << kmh << ".";
    return 0 ;
}