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
			cout << "O TEMPO DE TRABALHO INFORMADO � INVALIDO" << endl << endl;
		}else{
			if (mes <= 12){
				cout << "O sal�rio ap�s o reajuste ser� no valor de: R$" << 1.10*sal << endl << endl;
			}else{
				if (mes > 12){
					cout << "O sal�rio ap�s o reajuste ser� no valor de: R$" << 1.20*sal << endl << endl;
				}
			}
		}
	}else{
		if(sal <= 0){
			cout << "O SAL�RIO INFORMADO � INVALIDO" << endl << endl; 
		}
	}
}


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float salario;
	int mes;
	cout << "_______________________________________________________________________________________\n\n";
	cout << "O programa em quest�o informa seu sal�rio ap�s o reajuste." << endl ;
	cout << "Informe o sal�rio atual :" ;
	cin >> salario;
	cout << "Quantos meses voc� trabalha na empresa :";
	cin >> mes;
	cout << "_______________________________________________________________________________________\n\n" ;
	reajuste(salario, mes);
	cout << "=======================================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	mes = getch();
}
