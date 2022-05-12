#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa tranforma valor em hora para minutos 

using namespace std;

void HoraMin(float hora){
	cout << hora << " horas equivale a " << hora*60 << " minutos." << endl << endl;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float hora;
	cout << "___________________________________________________________________\n\n";
	cout << "O programa em questão converte horas em minutos." << endl ;
	cout << "Informe a hora para conversão em minutos :" ;
	cin >> hora;
	cout << "___________________________________________________________________\n\n" ;
	HoraMin(hora);
	cout << "===================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	hora = getch();
}
