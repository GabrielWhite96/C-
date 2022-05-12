#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa diz se o numero informado e par ou impar

using namespace std;

void parimpar(int num){
	setlocale(LC_ALL, "Portuguese_Brazil");
	if (num % 2 == 0){
		cout << "O número é par \n\n" ;
	}else{
		if (num % 2 != 0){
			cout << "O número é impar \n\n";
		}
	}
}
	
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num;
	cout << "___________________________________________________________________\n\n";
	cout << "O programa em questão informa se número inteiro é par ou impar." << endl ;
	cout << "Informe o número :" ;
	cin >> num;
	cout << "___________________________________________________________________\n\n" ;
	parimpar(num);
	cout << "===================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	num = getch();
}
