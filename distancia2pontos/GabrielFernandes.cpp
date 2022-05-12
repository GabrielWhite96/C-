#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

float distancia( float x1, float x2, float y1, float y2){
	float aux = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return aux;
}

float perimetro( float b, float h){
	float aux = 2*(b+h);
	return aux;
}

float area( float b, float h){
	float aux = b*h;
	return aux;
}

int main(){
	float x1, x2, x3, y1, y2, y3;
	cout << "Informe o x1 :" << endl ;
	cin >> x1;
	cout << "Informe o x2 :" << endl ;
	cin >> x2;
	cout << "Informe o x3 :" << endl ;
	cin >> x3;
	cout << "Informe o y1 :" << endl ;
	cin >> y1;
	cout << "Informe o y2 :" << endl ;
	cin >> y2;
	cout << "Informe o y3 :" << endl ;
	cin >> y3;
	cout << "O perimetro do retangulo e : " << perimetro(distancia(x1, x2, y1, y2),distancia(x2, x3, y2, y3)) << endl;
	cout << "A area do retangulo e : " << area(distancia(x1, x2, y1, y2),distancia(x2, x3, y2, y3)) << endl;
	cout << endl << "Aperte qualquer tecla para sair" ;
	x1 = getch () ;

	return 0;
}
