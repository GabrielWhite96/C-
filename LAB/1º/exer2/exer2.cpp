#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa informa o aumento salarial 

using namespace std;

float AumentoSalario(float sal, float aum){
	float resultado = (aum/100)*sal;
	return resultado;
}

float SalarioFinal(float sal, float aum){
	float resultado = ((aum/100)+1)*sal;
	return resultado;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float salario;
	float aumento;
	cout << "___________________________________________________________________\n\n";
	cout << "Informe o seu salário atual :" ;
	cin >> salario;
	cout << "Informe o valor do aumento salarial em porcentagem :" ;
	cin >> aumento;
	cout << "___________________________________________________________________\n\n" ;
	cout << "Após o aumento de: R$" << AumentoSalario(salario, aumento) << ". " ;
	cout << "O seu salário será de: R$" << SalarioFinal(salario, aumento) << endl << endl;
	cout << "===================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	
	
	salario = getch();
}
