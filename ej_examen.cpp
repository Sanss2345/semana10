#include <iostream>

int main(){
    int num_1, num_2, sum, rest, mult;
    std::cout<<"Ingresa el primer numero: "<<std::endl;
    std::cin>>num_1;
    std::cout<<"Ingresa el segundo numero"<<std::endl;
    std::cin>>num_2;
    sum=num_1+num_2;
    rest=num_1-num_2;
    mult=num_1*num_2;
    std::cout<<"La suma es: "<<sum<<std::endl<<"La resta es "<<rest<<std::endl<<"La multiplicacion es: "<<mult<<std::endl;
    return 0;
}

//El codigo funciona tal cual esta en el examen.