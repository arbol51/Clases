#include <iostream>
#include <string>

class multiplicar {
	public:
	     multiplicar();

	     void entrada_datos(int numero_1, int numero_2);
	     void operacion_multi();
	     void operacion_suma();
	     void imprimirDatos_multi();
	     void imprimirDatos_suma();
	     
    
    private:
         int numero_1 = 0;
         int numero_2 = 0;
         int resultado = 0;
         int suma = 0;

};

multiplicar::multiplicar() {
	//numero_1 = 0;
	//numero_2 = 0;
	//resultado = 0;
}

void multiplicar::entrada_datos(int numero_1, int numero_2){
	this->numero_1 = numero_1;
	this->numero_2 = numero_2; 
}

void multiplicar::operacion_multi(){
	resultado = numero_1 * numero_2;
}

void multiplicar::operacion_suma(){
	suma = numero_1 + numero_2;
}

void multiplicar::imprimirDatos_multi(){
	std::cout << "Resultado:  " << resultado  << std::endl;
}

void multiplicar::imprimirDatos_suma(){
	std::cout << "Resultado:  " << suma  << std::endl;
}

int main(){
    multiplicar Opera_multi;

    int numero1, numero2;
    
	std::cout << "Numero 1: ";
    std::cin >> numero1;
    
    std::cout << "Numero 2: ";
    std::cin >> numero2;
    
    std::cin.ignore();
   

    Opera_multi.entrada_datos(numero1, numero2);
    
    Opera_multi.operacion_multi();
    
    Opera_multi.operacion_suma();


    std::cout << "\nResultado multiplicacion  =   :\n";
    Opera_multi.imprimirDatos_multi();
    
    std::cout << "\nResultado suma  =   :\n";
    Opera_multi.imprimirDatos_suma();


    return 0;
}



