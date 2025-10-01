/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
   int numero;
    std::cout << " escreva numero ";
    std::cin >> numero;
    if (numero > 0) {
    std::cout << " o numero e positivo ";
    } else {
    std::cout << " o numero e negativo ";
    }  

    return 0;
}