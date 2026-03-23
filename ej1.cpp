#include <iostream>

int main(){
    int num,suma=0, i=1;
    std::cout<<"Hola"<<std::endl;
    while(i<=3){
        std::cout<<"Ingresa el "<<i<<" numero: ";
        std::cin>>num;
        i+=1 ;
        suma+=num;
    }
    std::cout<<"El promedio es: "<< suma/3;
}

/* BIG O: 0(1)
Justificación:
El programa tiene un número fijo de iteraciones (3), ya que el ciclo while siempre se ejecuta exactamente tres veces sin importar el 
valor de entrada. 
No depende del tamaño de los datos ni crece con el input del usuario. 
Por lo tanto, el tiempo de ejecución es constante.
*/