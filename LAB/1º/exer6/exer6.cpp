#include <iostream>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa Calcule o consumo medio do carro 

using namespace std;

void consumo(float dist, float lit){
	cout << "O consumo médio do carro é de " << dist/lit << "km/l" << endl << endl;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float distancia;
	float litros;
	cout << "________________________________________________________________________\n\n";
	cout << "Esse programa Calcule o consumo médio do carro." << endl;
	cout << "Informe em kilometros, a distancia percorrida :" ;
	cin >> distancia;
	cout << "Informe em litros, a quantidade de combustivel consumidos :" ;
	cin >> litros;
	cout << "________________________________________________________________________\n\n" ;
	consumo(distancia, litros);
	cout << "========================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	
	
	litros = getch();
}
