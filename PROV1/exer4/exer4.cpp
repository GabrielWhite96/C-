#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//

using namespace std;

void tempototal(){
	float chico;
	float ze; 
	int tempo;
	chico=1.50;
	ze=1.10;
	tempo=0;
	do{
		ze = ze+0.03;
		chico = chico+0.02;
		tempo++;
	}while(ze<=chico);
	cout << "O tempo necessário para ze alcançar chico será de " << tempo << endl;
}



int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float chico=1.5; 
	float ze=1.1;
	cout << "______________________________________________________________________\n\n";
	cout << "Altura do Zé: "<< ze << " metros" << endl;
    cout << "Altura do Chico: "<< chico << " metros" << endl;
	cout << "______________________________________________________________________\n\n" ;
	tempototal();
	cout << "======================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	ze = getch();
}
