#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa diz se o numero informado e par ou impar

using namespace std;

void parimpar(int num){
	setlocale(LC_ALL, "Portuguese_Brazil");
	if (num % 2 == 0){
		cout << "O n�mero � par \n\n" ;
	}else{
		if (num % 2 != 0){
			cout << "O n�mero � impar \n\n";
		}
	}
}
	
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num;
	cout << "___________________________________________________________________\n\n";
	cout << "O programa em quest�o informa se n�mero inteiro � par ou impar." << endl ;
	cout << "Informe o n�mero :" ;
	cin >> num;
	cout << "___________________________________________________________________\n\n" ;
	parimpar(num);
	cout << "===================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	num = getch();
}
