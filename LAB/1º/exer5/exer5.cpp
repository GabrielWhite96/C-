#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa diz o valor da conta a ser paga 

using namespace std;


void valorfinal(float val){
	setlocale(LC_ALL, "Portuguese_Brazil");
	cout << "O valor a ser pago é de: R$" << (val*0.46)+(0.18*(val*0.46)) << endl << endl;
}


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float valorq;
	cout << "_______________________________________________________________________________________\n\n";
	cout << "O programa em questão informa seu salário líquido." << endl ;
	cout << "Informe o salário bruto :" ;
	cin >> valorq;
	cout << "_______________________________________________________________________________________\n\n" ;
	valorfinal(valorq);
	cout << "=======================================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	valorq = getch();
}
