/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
   
{ int n1;
    do {
        std::cout<<"Escreva um numero";
        std::cin>> n1;
        if (n1% 2 == 0){
            std::cout<< "o numero e par";
        }
        else {
            std::cout<<"o numero e impar";
        }
        }while (n1!=0);

        
    

    return 0;
}