#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa diz se � negativo neutro ou positivo

using namespace std;

void NegPosNeu(float num){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	if(num == 0){
		cout << "O n�mero informado � NEUTRO \n\n";
	}else{
		if(num < 0){
			cout << "O n�mero � informado � NEGATIVO \n\n";
		}else{
			if(num > 0){
				cout << "O n�mero informado � POSITIVO \n\n";
			}
		}
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float num;
	cout << "_______________________________________________________________________________________\n\n";
	cout << "O programa em quest�o informa se n�mero real � negativo, positivo ou neutro." << endl ;
	cout << "Informe o n�mero :" ;
	cin >> num;
	cout << "_______________________________________________________________________________________\n\n" ;
	NegPosNeu(num);
	cout << "=======================================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	num = getch();
}
