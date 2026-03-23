#include <iostream>
#include <vector>

int main() {
    int cant, num;
    std::cout << "Cuantos numeros vas a ingresar? ";
    std::cin >> cant;
    std::vector<int> numeros;
    for (int i = 0; i < cant; i++) {
        std::cout << "Ingresa el numero " << i + 1 << ": ";
        std::cin >> num;
        numeros.push_back(num);
    }

    std::cout << "\nParejas:\n";
    for (int i = 0; i < cant; i++) {
        for (int j = 0; j < cant; j++) {
            if (i != j) { 
                std::cout << "(" << numeros[i] << ", " << numeros[j] << ")\n";
            }
        }
    }

    return 0;
}
/* BIG O: 0(n2)
Justificación:
Se utilizan dos ciclos for anidados que recorren los n números.
Por eso, el tiempo de ejecución crece proporcionalmente a n².
*/