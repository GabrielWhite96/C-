#include <iostream>
#include <conio.h>

using namespace std;

void podevotar(int idade){
	
	if ( idade >= 18){
			cout << "Voce esta apto a votar " ;
	}else{
		cout << "Voce nao esta apto a votar " ;
	}
	
}


int main (){
	int valor;
	cout << "Informe sua idade: ";
	cin >> valor;
	podevotar ( valor );
	cout << endl << "Aperte qualquer tecla para sair" ;
	valor = getch ();
	return 0;
}
