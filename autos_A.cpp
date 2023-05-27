#include <iostream>
#include <string>

class Auto {
	public:
	     Auto();

	     void asignarDatos(const std::string& marca, int modelo);
	     void imprimirDatos();
    
    private:
         std::string marca;
         int modelo;

};

Auto::Auto() {
	marca = "";
	modelo = 0;
}

void Auto::asignarDatos(const std::string& marca, int modelo){
	this->marca = marca;
	this->modelo = modelo; 
}

void Auto::imprimirDatos(){
	std::cout << "Marca:  " << marca  << std::endl;
	std::cout << "Modelo:  " << modelo  << std::endl;
}

int main(){
	Auto auto1;
	Auto auto2;

	std::string marca1 = "Datsun";
	int modelo1 = 1985;

	std::string marca2 = "Subaru";
	int modelo2 = 2025;

    auto1.asignarDatos(marca1, modelo1);
    auto2.asignarDatos(marca2, modelo2);

    std::cout << "\nDatos del auto 1:\n";
    auto1.imprimirDatos();

    std::cout << "\nDatos del auto 2:\n";
    auto2.imprimirDatos();

    return 0;
}


