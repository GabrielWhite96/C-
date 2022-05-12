#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa diz ao usuario se ele foi aprovado ou reprovado

using namespace std;

void aprovacao(float nota){
	
	if (nota > 100){
			cout << "NOTA INVALIDA" << endl << endl;
	}else{
		if (nota < 0){
			cout << "NOTA INVALIDA" << endl << endl;
		}else{
			if (nota >= 60){
				cout << "APROVADO" << endl << endl;
			}else{
				cout << "REPROVADO" << endl << endl;
				}
			}
		}
	}


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float nota;
	cout << "___________________________________________________________________\n\n";
	cout << "O programa em questão informa se o usuario foi aprovado ou não." << endl ;
	cout << "Informe a nota :" ;
	cin >> nota;
	cout << "___________________________________________________________________\n\n" ;
	aprovacao(nota);
	cout << "===================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	nota = getch();
}
