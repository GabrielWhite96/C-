#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

float volume( float altura, float largura){
	float aux = 3.14*(largura/2)*(largura/2)*altura;
	return aux;
}
	
int main(){
	float x, y;
	cout << "Informe a altura do copo:" << endl ;
	cin >> x;
	cout << "Informe a largura do copo:" << endl ;
	cin >> y;
	cout << "O volume do copo e:" << volume(x, y);
	cout << endl << "Aperte qualquer tecla para sair" ;
	x= getch () ;
}
