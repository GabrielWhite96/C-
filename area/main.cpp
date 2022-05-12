#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void area(int lado){
	float aux = lado*lado;
	cout << "A area do quadrado e: " << aux ;
}


int main(){
	float num;
	cout << "Informe o lado do quadrado: " << endl ;
	cin >> num;
	area( num );
	cout << endl << "Aperte qualquer tecla para sair" ;
	num = getch () ;
	return 0;
}
