#include <iostream>

int main(){

    std::string textos[10];
    int tamano=sizeof(textos)/sizeof(textos[1]);
    std::cout << "Tamaño maximo: " << tamano << std::endl;
    int i;
    for( i=0; i< 10 ; i++ ){
        std::cout << "Dame un texto: (escriba exit para salir) " ;
        std::cin >> textos[i];
        if(textos[i] == "exit")
            break;
    }

    std::cout << "Número de textos introducido: " << i << std::endl;

    for(int j=0; j< i ; j++ ){
        std::cout << "El texto introducido es: " << textos[j] << std::endl;
    }

    
    return 0;

}







