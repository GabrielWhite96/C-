#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa diz o salario apos o reajuste

using namespace std;

void reajuste(float sal, int mes){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	if(sal > 0){
		if (mes < 0){
			cout << "O TEMPO DE TRABALHO INFORMADO É INVALIDO" << endl << endl;
		}else{
			if (mes <= 12){
				cout << "O salário após o reajuste será no valor de: R$" << 1.10*sal << endl << endl;
			}else{
				if (mes > 12){
					cout << "O salário após o reajuste será no valor de: R$" << 1.20*sal << endl << endl;
				}
			}
		}
	}else{
		if(sal <= 0){
			cout << "O SALÁRIO INFORMADO É INVALIDO" << endl << endl; 
		}
	}
}


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float salario;
	int mes;
	cout << "_______________________________________________________________________________________\n\n";
	cout << "O programa em questão informa seu salário após o reajuste." << endl ;
	cout << "Informe o salário atual :" ;
	cin >> salario;
	cout << "Quantos meses você trabalha na empresa :";
	cin >> mes;
	cout << "_______________________________________________________________________________________\n\n" ;
	reajuste(salario, mes);
	cout << "=======================================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	mes = getch();
}
