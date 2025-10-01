/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main(){
    double mat,ing,fq,pt,media;
    std::cout << "Escreva a nota de Matematica";
    std::cin >> mat;
     std::cout << "Escreva a nota de Ingles";
    std::cin >> ing;
 std::cout << "Escreva a nota de Fisica ou quimica";
    std::cin >> fq;
 std::cout << "Escreva a nota de portugues";
    std::cin >> pt;
        media = (mat+ing+fq+pt)/4;
        std::cout<< "A media das notas é" << media <<".";

    


    return 0;
}