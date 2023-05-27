#include <iostream>
#include <string>

class Auto {
	public:
	     Auto();

	     void asignarDatos(const std::string& marca, int modelo);
	     void imprimirDatos();
	     
    
    private:
         std::string marca_A;
         int modelo_A;

};

Auto::Auto() {
	//marca_A = "";
	//modelo_A = 0;
}

void Auto::asignarDatos(const std::string& marca, int modelo){
	this->marca_A = marca;
	this->modelo_A = modelo; 
}

void Auto::imprimirDatos(){
	std::cout << "Marca:  " << marca_A  << std::endl;
	std::cout << "Modelo:  " << modelo_A  << std::endl;
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


