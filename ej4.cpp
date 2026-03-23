#include <iostream>

int main(){
    int num, contador = 0;

    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    while(num > 1){
        std::cout << num << " / 2 = " << num / 2 << std::endl;
        num = num / 2;
        contador++;
    }

    std::cout << "\nSe dividio " << contador << " veces";

    return 0;
}
/* BIG O: O(log n)
Justificación:
El número se divide entre 2 en cada iteración del while.
Por eso, la cantidad de repeticiones disminuye logarítmicamente.
*/