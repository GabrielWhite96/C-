#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa diz se é negativo neutro ou positivo

using namespace std;

void NegPosNeu(float num){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	if(num == 0){
		cout << "O número informado é NEUTRO \n\n";
	}else{
		if(num < 0){
			cout << "O número é informado é NEGATIVO \n\n";
		}else{
			if(num > 0){
				cout << "O número informado é POSITIVO \n\n";
			}
		}
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float num;
	cout << "_______________________________________________________________________________________\n\n";
	cout << "O programa em questão informa se número real é negativo, positivo ou neutro." << endl ;
	cout << "Informe o número :" ;
	cin >> num;
	cout << "_______________________________________________________________________________________\n\n" ;
	NegPosNeu(num);
	cout << "=======================================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	num = getch();
}
