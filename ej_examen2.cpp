#include <iostream>

/*
int main(){
    int num,pot;
    std::cout<<"Ingresa un numero: "<<std::endl;
    std::cin>>num;
    for(int i=1;i<=num;i++){
        pot= i**2;        Esta linea de aqui tiene un error ya que dentro de c++ no se puede usar ** para definir 
        potencia, el codigo corregido seria                
        std::cout<<i<<"="<<pot<<std::endl;
    }
    return 0;
}
 */

 int main(){
    int num,pot;
    std::cout<<"Ingresa un numero: "<<std::endl;
    std::cin>>num;
    for(int i=1;i<=num;i++){
        pot= i*i;                
        std::cout<<i<<"="<<pot<<std::endl;
    }
    return 0;
}