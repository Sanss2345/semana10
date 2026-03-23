#include <iostream>

int main(){
    int n, num, menor, mayor=0  ;
    std::cout<<"Cuantos numeros vas a ingresar? ";
    std::cin>>n;
    for(int i=0 ; i<=n-1; i++){
        std::cout<<"Ingresa el numero "<<i+1<<": ";
        std::cin>>num;
        if(menor>=num){
            menor=num;
        }
        else if(mayor<=num){
            mayor=num;
        }
    }
    std::cout<<"El mayor es: "<<mayor<<std::endl<<"El menor es: "<<menor<<std::endl;
}

/* BIG O: 0(n)
Justificación:
El ciclo for recorre los n números ingresados una sola vez.
Por eso, el tiempo de ejecución depende de n.
*/