#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa diz o salario liquido

using namespace std;

void liquido(float sal, float hora, float valor){
	setlocale(LC_ALL, "Portuguese_Brazil");
	cout << "O seu sal�rio l�quido �: R$" << ((hora*valor)+sal)-(0.08*((hora*valor)+sal)) << endl << endl;
}


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float salario;
	float horas;
	float valor;
	cout << "_______________________________________________________________________________________\n\n";
	cout << "O programa em quest�o informa seu sal�rio l�quido." << endl ;
	cout << "Informe o sal�rio bruto :" ;
	cin >> salario;
	cout << "Informe quantidade de horas extras trabalhadas :";
	cin >> horas;
	cout << "Informe o valor da hora extra :";
	cin >> valor;
	cout << "_______________________________________________________________________________________\n\n" ;
	liquido(salario, horas, valor);
	cout << "=======================================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	horas = getch();
}
